#include "queue.h"
#include <algorithm>
using namespace std;

//Return the size of the queue
int Queue::get_queue_size() const {
	if (mode != VECTOR_MODE) 
		return queue_size;
	else
		return queue_vec.size();
}


//Output the queue
void Queue::print_queue() const {
	if (get_queue_size() <= 0) {
		cout << "EMPTY QUEUE\n";
		return;
	}
	int counter = 0;
	if (mode == LINKED_LIST_MODE) {
		assert(head_ptr);
		Node *temp_ptr = head_ptr;
		while (temp_ptr) { //Same as saying while (temp_ptr != NULL)
			cout << "Node " << counter++ << ": " << temp_ptr->get_data() << endl;
			temp_ptr = temp_ptr->get_next();
		}
	} else if (mode == VECTOR_MODE) {
		for (auto &i : queue_vec) {
			cout << "Node " << counter++ << ": " << i << endl;
		}
	} else { //Array mode
		//Note: if our list size is 2, then tail will be head+2
		//In other words, it points to the next place we will insert, not a valid element
		int start_index = head;
		int end_index = tail;
		if (tail < head) //Handle if we've wrapped around
			end_index += MAX_SIZE;
		for (int i = start_index; i < end_index; i++) {
			cout << "Node " << counter++ << ": " << get_element(i) << endl;
		}
	}
}

//Deletes the oldest Node inserted, and returns its data value
int Queue::pop() {
	//Handle an empty Queue
	if (get_queue_size() <= 0) return 0;
	queue_size--;

	if (mode == LINKED_LIST_MODE) {
		//Save the value that will be returned
		assert(head_ptr);
		assert(tail_ptr);
		int ret_val = tail_ptr->get_data();;

		//Handle a Queue of size one
		if (queue_size == 0) {
			delete tail_ptr;
			head_ptr = tail_ptr = NULL;
			return ret_val;
		}

		//Otherwise, scan through the Queue until we reach the one before the tail
		Node *prev_ptr = head_ptr;
		while (prev_ptr->get_next() != tail_ptr)
			prev_ptr = prev_ptr->get_next();
		delete tail_ptr;
		tail_ptr = prev_ptr;
		return ret_val;
	} else if (mode == VECTOR_MODE) {
		int ret_val = queue_vec.at(0);
		queue_vec.erase(queue_vec.begin());
		return ret_val;
	} else { //ARRAY_MODE
		int ret_val = get_element(head);
		head = access(head+1); //Increment head, and wrap around if we overflow
		return ret_val;
	}
}

//Adds a new Node to the end of the Queue
//The newest Node will be held in head_ptr
void Queue::push(int new_data) {
	assert(get_queue_size()+1 < MAX_SIZE); //Make sure theres room
	queue_size++;

	if (mode == LINKED_LIST_MODE) {
		Node *new_ptr = new Node(new_data,head_ptr);
		head_ptr = new_ptr;
		if (queue_size == 1)
			tail_ptr = head_ptr;
	} else if (mode == VECTOR_MODE) {
		queue_vec.push_back(new_data);
	} else { //ARRAY_MODE
		//Write new_data into tail, and then increment tail
		queue_arr[access(tail)] = new_data;
		tail = access(tail+1);
	}
}

//Returns if a Node containing the passed-in integer is in the Queue
//True if such a Node exists, false otherwise
bool Queue::search(int test_data) const {
	if (get_queue_size() <= 0) return false;

	if (mode == LINKED_LIST_MODE) {
		for (Node *temp = head_ptr; temp; temp = temp->get_next())
			if (temp->get_data() == test_data)
				return true;
	} else if (mode == VECTOR_MODE) {
		//Non-iterator method
		for (auto i : queue_vec) {
			if (i == test_data) return true;
		}
		//********ITERATOR MODE**********
//		auto search = find(queue_vec.begin(), queue_vec.end(), test_data);
//		if(search != queue_vec.end()) return true;
	}
	else { //ARRAY_MODE
		//Start at head, end at tail, return true if its in there
		//You should also handle wrapping around the array as well
		//If it is found...
		int temp = head;
		while(true){
			if(get_element(temp) == test_data) return true;
			temp = access(temp+1);
			if(temp == tail) return false;
		}
	}
	return false;
}
//Removes the newest node containing the passed in integer
//Only remove one Node. Not all of them.
//Return true if any elements removed, false otherwise
bool Queue::remove (int old_data) {
	if (search(old_data)) { //If it is in the Queue...
		if (queue_size == 1) {
			pop(); //Because this must be it
			return true;
		}

		queue_size--; //All possible paths will successfully remove a Node

		if (mode == LINKED_LIST_MODE) {
			//Handle head holding the value
			if (head_ptr->get_data() == old_data) {
				Node *temp_ptr = head_ptr->get_next();
				delete head_ptr;
				head_ptr = temp_ptr;
				return true;
			}

			Node *prev_pointer = head_ptr; //This will be used to clean up the linked Queue
			for (Node *temp_ptr = head_ptr->get_next(); temp_ptr; temp_ptr = temp_ptr->get_next()) {
				if (temp_ptr->get_data() == old_data) {
					if (temp_ptr == tail_ptr) tail_ptr = prev_pointer; //Clean up tail pointer
					prev_pointer->set_next(temp_ptr->get_next()); //Fix the linked Queue
					delete temp_ptr;
					return true;
				}
				prev_pointer = temp_ptr; //Prev pointer moves in lockstep behind temp_ptr
			}
		}
		else if (mode == VECTOR_MODE) {
			//Non-Iterator method for finding things
			for (int i = queue_vec.size() - 1; i >= 0; i--) {
				if (queue_vec.at(i) == old_data) {
					queue_vec.erase(queue_vec.begin()+i);
					return true;
				}
			}
			//*****WRITE USING FIND********

		}
		else { //ARRAY_MODE
			//Search from head towards tail for the match
			//When you find it, move all the previous elements up by one, then...
			int temp1 = head;
			if(get_element(temp1) == old_data){
				queue_size ++;
				pop();
				return true;
			}
			int temp2 = access(tail-1);
			while(true){
				if(get_element(temp1) == old_data){
		//		cout << temp1 << endl;
		//		cout << head << endl;
					for(int i = 0; i < temp1-head; i ++){
						set_element(access(temp1-i),get_element(access(temp1-(i+1))));
					//	cout << -i << endl;
						if(access(temp1-(i+1)) == head){
							head = access(head+1);
							return true;
						}
					}
				}
				temp1++;
				if(get_element(temp2) == old_data){
			//	cout << temp2 << endl;
					for(int i = 0; i < tail-temp2; i ++){
						if(access(temp2+(i+1)) == tail){
							tail = access(temp2+i);
							return true;
						}
						set_element(access(temp2+i),get_element(access(temp2+(i+1))));
					//	cout << i << endl;
					}
				}
				temp2--;
			}
			return false;
		}

	}
}
