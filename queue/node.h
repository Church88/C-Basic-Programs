#pragma once

//This Node class is fully functional
class Node {
	int data = 0; //Holds the data we're keeping track of
	Node *next = NULL;
	public:
	Node() {}
	Node(int new_data, Node *new_next) : data(new_data), next(new_next) {}
	int get_data() const { return data; }
	Node *get_next() const { return next; }
	void set_next(Node *new_next) { next = new_next; }
};
