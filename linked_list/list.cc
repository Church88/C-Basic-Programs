#include <iostream>
#include "list.h"
using namespace std;

//YOU: Write these four functions
//Make sure you handle empty Lists cleanly!

//Deletes the oldest Node inserted, and returns its data value
//The oldest Node inserted should be tail_ptr
int List::pop(){
	if(head_ptr == NULL) return 0;
	int junk = tail_ptr->get_data();
	if(list_size == 1){
		delete head_ptr;
		tail_ptr = NULL;
		head_ptr = NULL;
		list_size--;
		return junk;
	}
	Node *temp_ptr = tail_ptr->get_prev();
	delete tail_ptr;
	tail_ptr = temp_ptr;
	tail_ptr->set_next(NULL);
	list_size--;
	/*while(true){
		if(temp_ptr->get_next() == tail_ptr){
			delete tail_ptr;
			tail_ptr = temp_ptr;
			tail_ptr->set_next(NULL);
			list_size--;
			break;
		}
		else temp_ptr = temp_ptr->get_next();
	}*/
	return junk;
}
//Adds a new Node to the end of the list
//The newest Node will be held in head_ptr
void List::push(int new_data){
	if (list_size == 0){
		Node *new_ptr = new Node(new_data,NULL,NULL);
		tail_ptr = head_ptr = new_ptr;
		list_size++;
		return;
	}
	if (list_size == 1){
		Node *new_ptr = new Node(new_data,tail_ptr,NULL);
		head_ptr = new_ptr;
		tail_ptr->set_prev(new_ptr);
		list_size++;
		return;
	}
	Node *new_ptr = new Node(new_data,head_ptr,NULL);
	head_ptr->set_prev(new_ptr);
	head_ptr = new_ptr;
	list_size++;
}
//Returns if a Node containing the passed-in integer is in the list
//True if such a Node exists, false otherwise
bool List::search(int test_data) {//THIS CAN BE DONE WITH A FOR LOOP!
	Node *temp_ptr = head_ptr;
	if(head_ptr == NULL){
		return false;
	}
	while(temp_ptr){
		if(temp_ptr->get_data() == test_data)
			return true;
		temp_ptr = temp_ptr->get_next();
	}
	return false;
}
//Removes the newest node containing the passed in integer
//Only remove one Node. Not all of them.
//Return true if any elements removed, false otherwise
bool List::remove (int old_data) {
	if(head_ptr == NULL) return false;
	if(tail_ptr->get_data() == old_data){
		pop();
		return true;
	}
	if(!search(old_data)) return false;
	if(list_size == 1){
		pop();
		return true;
	}
	Node *temp_ptr = head_ptr;
	if(head_ptr->get_data() == old_data){
		head_ptr = head_ptr->get_next();
		head_ptr->set_prev(NULL);
		delete temp_ptr;
		list_size--;
		return true;
	}
	while(temp_ptr != NULL){
		if(temp_ptr->get_data() == old_data){
			temp_ptr->get_next()->set_prev(temp_ptr->get_prev());
			temp_ptr->get_prev()->set_next(temp_ptr->get_next());
			delete temp_ptr;
			list_size--;
			return true;
		}
		temp_ptr = temp_ptr->get_next();
	}
	return false;
}

