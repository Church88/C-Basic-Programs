#pragma once
#include <iostream>
#include <assert.h>
#include <vector>
#include "node.h"
using namespace std;


//This is a class to implement a queue
//Its interesting feature is that it allows the user to select how
// the queue will be implemented - either as a linked list, a C-style array
// or by using the modern C++ vector class.
class Queue {
	static const int MAX_SIZE = 100100; //100K max elements; Warning: Cannot be more than MAX_INT / 2
	int mode; //Holds how we are implementing the queue, either as linked list, array, or vector
	int queue_size = 0; //Current number of elements in queue, not used in vector mode

	//These are used in Linked List mode
	Node *head_ptr = NULL; //Holds newest member
	Node *tail_ptr = NULL; //Holds oldest member

	//These are used in Array mode
	int head = 0; //Which index the head is at
	int tail = 0; //Which index the tail is at, which is +1 past all valid elements
	int queue_arr[MAX_SIZE];
	//Circular array get/set methods -
	//Access will correctly wrap around indices that overflow or underflow
	int access(int index) const {
		while (index < 0) index += MAX_SIZE;
		if (index >= MAX_SIZE) index = index % MAX_SIZE;
		return index;
	}
	//Will return the Nth element of the array, handling overflow and underflow via access()
	int get_element(int index) const {
		return queue_arr[access(index)];
	}
	//Sets the Nth element of the array, handling overflow and underflow via access()
	void set_element(int index, int new_value) {
		queue_arr[access(index)] = new_value;
	}

	//This is used in Vector mode
	vector<int> queue_vec{};

	public:
	static const int LINKED_LIST_MODE = 0;
	static const int ARRAY_MODE = 1;
	static const int VECTOR_MODE = 2;
	Queue(int new_mode = ARRAY_MODE) : mode(new_mode) {}

	//These are done for you
	void print_queue() const;
	int get_queue_size() const;
	int pop();
	//You'll need to write these
	void push(int new_data);
	bool search(int test_data) const;
	bool remove (int old_data);

	//Don't worry about these - it just means not to allocate default
	// functions for the copy constructor or assignment operator
	Queue(const Queue&) = delete;
	Queue operator=(const Queue&) = delete;
};
