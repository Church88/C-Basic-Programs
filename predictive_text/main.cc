#include <iostream>
#include <cstdlib>
using namespace std;

const int ASCII = 256;

class Node{
	public:
		bool isword = false;
		int count = 0;
		Node *next[ASCII] = {};
	};
int mem;
void print_tree(Node *node, int lvl =0){
	if (node == NULL) return;
	mem++;
	for(int i = 0; i < ASCII; i++)
		if(node->next[i]) cout << char(i);
	for(int i = 0; i < ASCII; i++)
		if(node->next[i]) print_tree(node->next[i],lvl+1);
}
int main (){
	Node *root = new Node;
	Node *ptr = root;
	int dash_count = 0;
	while(cin){
		unsigned char c;
		c = toupper(getchar());
		if(!cin || cin.eof()) break;
		if(c < 0 || c >= ASCII){
			cout << "Bad character:" << int(c) << endl;
			exit(EXIT_FAILURE);
		}
		if(dash_count == 5) break;
		if(c != '-'){
			if(ptr->next[int(c)]){//is there a node attached to 'c'
				ptr=ptr->next[int(c)];//if it is move ptr to that node
				dash_count = 0;
				continue;
			}
			if(c == '\n'){
				ptr->isword = true;
				ptr = root;
				dash_count = 0;
				continue;
			}
			else ptr->next[int(c)] = new Node;
		}
		if(c == '-') dash_count++;
	}
	//ptr = root;
	//while(cin){
	print_tree(root);
}
