#include <iostream>
#include "stack.h"
//#include "stack.cc"
using namespace std;

int main() {
	Stack<int,100> stack1;
	Stack<char,100> stack2;
	Stack<string,100> stack3;
	cout << "Pushing 10 elements...\n";
	for (int i = 0; i < 10; i++) {
		stack1.push(i);
		stack2.push('a'+i);
		stack3.push(stack3.top()+"LOL");
	}
	//cout << stack1.size() << " " << stack2.size() << " " << stack3.size() << " elements added.\n";
	for (int i = 0; i < 10; i++) {
		cout << "The top of each stack is: " << stack1.top() << "\t" << stack2.top() << "\t" << stack3.top() << endl;
		stack1.pop();
		stack2.pop();
		stack3.pop();
	}
}
