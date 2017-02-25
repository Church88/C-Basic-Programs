#include <iostream>
#include <cstdlib>
#include <sstream>
#include "imaginary.h"
#include "complex.h"
using namespace std;

int main() {
	int temp = 0;
	Complex comp_1, comp_2, comp_3;
	string opaf;
	string userinput;
	while (true) {
		getline(cin, userinput);
		stringstream ss(userinput);
		ss >> comp_1 
		ss >> opaf;
		ss >> comp_2;
		cout << comp_1 << endl;
		cout << comp_2 << endl;
		if (comp_1 == comp_3 || comp_2 == comp_3)
			exit(EXIT_SUCCESS);
		if (opaf != "+" && opaf != "==" && opaf != "-" && opaf != "*" && opaf != "^")
			exit (EXIT_SUCCESS);
		if (opaf == "+")
			cout << (comp_1 + comp_2);
		if (opaf == "-")
			cout << (comp_1 - comp_2);
		if (opaf == "==")
			if(comp_1 == comp_2)
				cout << "true\n";
			else cout << "false\n";
		if (opaf == "*")
			cout << (comp_1 * comp_2);
		if (opaf == "^"){
			cout << (comp_1^comp_2.get_real());
		}
	}
}

