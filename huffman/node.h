#pragma once
using namespace std;

class Node {
	public:
		int count = 0; //Key
		unsigned char data = 0; //Value
		Node *left  = NULL;
		Node *right = NULL;
		string enc = "2"; //Will throw error if this tries to get written
		bool operator<(const Node& rhs) const  { return count < rhs.count; }
	//	Not needed, but you can use these if you want
	 	bool operator<=(const Node& rhs) const { return count <= rhs.count; }
		bool operator>(const Node& rhs) const  { return count > rhs.count; }
		bool operator>=(const Node& rhs) const { return count >= rhs.count; }
		bool operator==(const Node& rhs) const { return count == rhs.count; }
};

