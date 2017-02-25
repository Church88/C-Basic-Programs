#include <cmath>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main () {

	ofstream of10k("rem10k");
	int j = 5001;
	of10k << "REMOVE " << 5000 << endl;
	for(int i = 4999; i > 0; i--){
		of10k << "REMOVE " << i << endl;
		of10k << "REMOVE " << j << endl;
		j++;
	}
	of10k << "REMOVE " << 10000 << endl;

	ofstream of20k("rem20k");
	j = 10001;
	of20k << "REMOVE " << 10000 << endl;
	for(int i = 9999; i > 0; i--){
		of20k << "REMOVE " << i << endl;
		of20k << "REMOVE " << j << endl;
		j++;
	}
	of20k << "REMOVE " << 20000 << endl;

	ofstream of30k("rem30k");
	j = 15001;
	of30k << "REMOVE " << 15000 << endl;
	for(int i = 14999; i > 0; i--){
		of30k << "REMOVE " << i << endl;
		of30k << "REMOVE " << j << endl;
		j++;
	}
	of30k << "REMOVE " << 30000 << endl;

	ofstream of40k("rem40k");
	j = 20001;
	of40k << "REMOVE " << 20000 << endl;
	for(int i = 19999; i > 0; i--){
		of40k << "REMOVE " << i << endl;
		of40k << "REMOVE " << j << endl;
		j++;
	}
	of40k << "REMOVE " << 40000 << endl;

	ofstream of50k("rem50k");
	j = 25001;
	of50k << "REMOVE " << 25000 << endl;
	for(int i = 24999; i > 0; i--){
		of50k << "REMOVE " << i << endl;
		of50k << "REMOVE " << j << endl;
		j++;
	}
	of50k << "REMOVE " << 50000 << endl;

	ofstream of60k("rem60k");
	j = 30001;
	of60k << "REMOVE " << 30000 << endl;
	for(int i = 29999; i > 0; i--){
		of60k << "REMOVE " << i << endl;
		of60k << "REMOVE " << j << endl;
		j++;
	}
	of60k << "REMOVE " << 60000 << endl;

	ofstream of70k("rem70k");
	j = 35001;
	of70k << "REMOVE " << 35000 << endl;
	for(int i = 34999; i > 0; i--){
		of70k << "REMOVE " << i << endl;
		of70k << "REMOVE " << j << endl;
		j++;
	}
	of70k << "REMOVE " << 70000 << endl;

	ofstream of80k("rem80k");
	j = 40001;
	of80k << "REMOVE " << 40000 << endl;
	for(int i = 39999; i > 0; i--){
		of80k << "REMOVE " << i << endl;
		of80k << "REMOVE " << j << endl;
		j++;
	}
	of80k << "REMOVE " << 80000 << endl;

	ofstream of90k("rem90k");
	j = 45001;
	of90k << "REMOVE " << 45000 << endl;
	for(int i = 44999; i > 0; i--){
		of90k << "REMOVE " << i << endl;
		of90k << "REMOVE " << j << endl;
		j++;
	}
	of90k << "REMOVE " << 90000 << endl;

	ofstream of100k("rem100k");
	j = 50001;
	of100k << "REMOVE " << 50000 << endl;
	for(int i = 49999; i > 0; i--){
		of100k << "REMOVE " << i << endl;
		of100k << "REMOVE " << j << endl;
		j++;
	}
	of100k << "REMOVE " << 100000 << endl;

}
