#include <iostream>
#include <cstdlib>
#include "hash.h"

using namespace std;

int main () {
	string opaf;
	HashMap hash;
	int old_int;
	int new_int;
	int inc = 0;
	while (cin){
		cin>>op;
		for (auto &a: op)a=toupper(a);
		if (!cin || cin.eof() || op == "QUIT")break;
		if (opaf == "SEARCH"){
			cin >> num;
			hash.search(num);
		}

		if (opaf == "INSERT"){
			cin >> num;
			hash.insert(num, inc);
			inc++;
		}
		if (opaf == "CHANGE"){
			cin >> new_int >> new_int;
			hash.change(new_int, new_int);
		}
		if (opaf == "REMOVE"){
			cin >> old_int;
			hash.remove(old_int);
		}
	}
}
