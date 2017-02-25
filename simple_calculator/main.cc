#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool even (int x){
	if (x%2==0)
	cout << x << " is even\n"
	return true;
	else
	cout << x << " is odd\n";
	return false;
	}
int main () {

	cout << "My simple calculator\n";
	int x,y;
	string op;
	while (true){
	cin >> x >> op >> y;
	if (!cin) return 1; //Why is it 1?
	if (op == "+"){
	cout << x+y << endl;
	even (x+y);
	}
	if else (op == "-"){
	cout << x-y << endl;
	even (x-y);
	}
	if else (op == "/"){
		if (y==0){
		cout << "Bad input\n";
		return 1;}
	cout << x/y << endl;
	even (x/y);
	}
	if else (op == "*"){
	cout << x*y << endl;
	even (x*y)
	}
	if else (op == "^")
	cout << pow(x,y) << endl;
	even (pow(x,y))
	}
	if else (op == "%"){
	cout << x%y << endl;
	even (x%y)
	}
	else
	cout << "Bad input\n" << endl;
	}

return 0;
}
