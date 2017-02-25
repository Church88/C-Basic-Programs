#include <iostream>
#include <fstream>
using namespace std;
int main () {

	ofstream sr10k("sr10k");
	for(int i = 0; i < 10000; i++){
		sr10k << "SEARCH " << i << endl;
	}
	ofstream sr20k("sr20k");
	for(int i = 0; i < 20000; i++){
		sr20k << "SEARCH " << i << endl;
	}
	ofstream sr30k("sr30k");
	for(int i = 0; i < 30000; i++){
		sr30k << "SEARCH " << i << endl;
	}
	ofstream sr40k("sr40k");
	for(int i = 0; i < 40000; i++){
		sr40k << "SEARCH " << i << endl;
	}
	ofstream sr50k("sr50k");
	for(int i = 0; i < 50000; i++){
		sr50k << "SEARCH " << i << endl;
	}
	ofstream sr60k("sr60k");
	for(int i = 0; i < 60000; i++){
		sr60k << "SEARCH " << i << endl;
	}
	ofstream sr70k("sr70k");
	for(int i = 0; i < 70000; i++){
		sr70k << "SEARCH " << i << endl;
	}
	ofstream sr80k("sr80k");
	for(int i = 0; i < 80000; i++){
		sr80k << "SEARCH " << i << endl;
	}
	ofstream sr90k("sr90k");
	for(int i = 0; i < 90000; i++){
		sr90k << "SEARCH " << i << endl;
	}
	ofstream sr100k("sr100k");
	for(int i = 0; i < 100000; i++){
		sr100k << "SEARCH " << i << endl;
	}
}
