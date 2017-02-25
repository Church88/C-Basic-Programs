#include <iostream>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <stack>
using namespace std;

void die() {
	cout << "BAD INPUT\n";
	exit(EXIT_FAILURE);
}

int main() {
	int operand;
	char operat;
	bool seen_an_e = false;
	stack<int> waffles;
	int a,b = 0;
	while (cin) {
		cin >> ws; //Eat whitespace
		int c = cin.peek(); //Peek at next letter to read
		if (c == EOF) break;
		if (!isdigit(c)) { //Should be +,-,*,/,%,^,E
			cin >> operat;
			if(waffles.size()==0)die();
			if(operat == 'E'){
				if(waffles.size()==1){
					cout << waffles.top() << endl;
					continue;
				}
				else die();
			}
			if(waffles.size() < 2) die();
			else {
				b = waffles.top();
				waffles.pop();
				a = waffles.top();
				waffles.pop();
				if(operat=='+')waffles.push(a + b);
				if(operat=='-')waffles.push(a - b);
				if(operat=='*')waffles.push(a * b);
				if(operat=='/'){
					if(b==0)die();
					waffles.push(a / b);
				}
				if(operat=='^'){
					if(a==0&&b==0)die();
					waffles.push(pow(a,b));
				}
				if(operat=='%'){
					if(b==0)die();
					waffles.push(a%b);
				}
				continue;
			}
		}
		else { //isdigit(c)
			cin >> operand;
			waffles.push(operand);
		//	cout << waffles.size() << endl;
		}
	}
	if(operat!='E')die();
	if(waffles.size()==1)exit(EXIT_SUCCESS);
	else die();
	//Once we get here, we're at the end of the file
	//Do some final checks
	//YOU: Code this section
}
