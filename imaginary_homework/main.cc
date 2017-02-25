#include <iostream>
#include <cstdlib>
#include <string>
#include "imaginary.h"
#include "complex.h"
using namespace std;

void die() {
	cout << -1 << endl;
	exit(EXIT_SUCCESS);
}
void done() {
	cout << endl;
	exit(EXIT_SUCCESS);
}
int main() {
	Complex comp_1, comp_2, comp_3;
	string opaf;
	int exp;
	while (true) {
		cin >> comp_1;
		if (!cin) die();
		if (comp_1 == comp_3) done();
		cin >> opaf;
		if (!cin) die();
		if (opaf != "+" && opaf != "==" && opaf != "-" && opaf != "*" && opaf != "^") die();
		if (opaf == "^") {
			cin >> exp;
			cout << (comp_1^exp) << endl;
			continue;
			//done();
		}
		cin >> comp_2;
		if (!cin) die();
		if (opaf == "+"){
			cout << (comp_1 + comp_2) << endl;
			continue;
			//done();
		}
		if (opaf == "-"){
			cout << (comp_1 - comp_2) << endl;
			continue;
			//done();
		}
		if (opaf == "=="){
			if(comp_1 == comp_2){
				cout << "true\n";
				continue;
			//	done();
			}
			else {
				cout << "false\n";
				continue;
			//	done();
			}
		}
 		if (opaf == "*"){
 			cout << (comp_1 * comp_2) << endl;
 			continue;
 			//done();
 		}
	}
//	done();
}

