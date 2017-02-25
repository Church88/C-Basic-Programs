#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

void die(){
	cout << -1 << endl;
	exit(EXIT_FAILURE);
}

class data {
	public:
		unsigned long ssn;
		string name;
		string addr;
		data(): ssn(0), name(""), addr("") {}
		data(unsigned long new_SSN, string new_NAME, string new_ADDR): ssn(new_SSN), name(new_NAME), addr(new_ADDR) {}
};

int main() {
	string input_s;
	string input_n;
	string input_a;
	unsigned long input_ssn;
	map<int,data> records_s;
	map<string,data> records_n;
	while(true){
		getline(cin,input_n);
		if(!isalpha(input_n.at(0))) die();
		cout << "Name: " << input_n << endl;
		getline(cin,input_s);
		input_ssn = strtoul(input_s.c_str(),NULL,10);
		cout << "SSN: " << input_ssn << endl;
		auto result = records_s.find(input_ssn);	//find ssn for uniquness
		if (result != records_s.end()) die();
		getline(cin,input_a);
		cout << "Address: " << input_a << endl;
		data input(input_ssn,input_n,input_a);
		records_s[input_ssn] = input;
		records_n[input_n] = input;
	}
	string input_f;
/*	while(true){
		getline(cin,input_f);
		if(isalpha(input_f.at(0))){
			auto result = records_n.find(input_f);
			if(result ){ //search by name
				//cout << 
			}
			else die();
		}
		if(isdigit(input_f)){
			input_ssn = stoull(input_f);
			if(records_s.find(input_ssn)){ //search by ssn
				//cout << 
			}
			else die();
		}
		else die();
	}*/
}

