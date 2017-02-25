#include <ctime>
#include <string>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

class ENTRY {
	public:
		long long int SSN;
		string NAME;
		string ADDRESS;
		ENTRY(): SSN(0), NAME(""), ADDRESS("") {}
		ENTRY(long long int new_SSN, string new_NAME, string new_ADDRESS):
			SSN(new_SSN), NAME(new_NAME), ADDRESS(new_ADDRESS) {}
};

ostream& operator << (ostream& lhs, ENTRY& rhs){
	lhs << rhs.NAME << endl;
	lhs << rhs.ADDRESS << endl;
	lhs << rhs.SSN << endl;
	return lhs;
}

void die(){
	cout << -1 << endl;
	exit(EXIT_FAILURE);
}

int main() {

	clock_t start_time = clock();

	map<string,ENTRY> string_map;
	map<int,ENTRY> int_map;
	string name;
	string address;
	string ssn_s;
	long long int ssn_i;
	while(true){
		getline(cin,name);
		if(name == "done") break;
	//	for(unsigned int i = 0; i < name.size(); i++){
		if(isdigit(name.at(0))) die();
	//	}
//		cout << "Name: " << name << endl;
		getline(cin,address);
//		cout << "Address: " << address << endl;
		getline(cin,ssn_s);
		for(long long unsigned int i = 0; i < ssn_s.size(); i++){
			if(isalpha(ssn_s.at(i))) die();
		}
//		cout << "SSN string: " << ssn_s << endl;
		ssn_i = atoll(ssn_s.c_str());
		if(ssn_i < 0) die();
//		cout << "SSN int: " << ssn_i << endl;
		//check for unique #'s
		auto search = int_map.find(ssn_i);
		if(search == int_map.end()){
			ENTRY input(ssn_i,name,address);
//			cout << "Entry: " << input;
			string_map[name] = input;
			int_map[ssn_i] = input;
		}
		if(search != int_map.end()) die();
	}
	string look_name;
	long long int look_ssn;
	while(true){
		getline(cin,look_name);
		if(!cin) die();
		if(look_name == "done") break;
		if(isdigit(look_name.at(0))){
			look_ssn = atoll(look_name.c_str());
			if(look_ssn < 0) continue;
			//find by ssn and continue
			if(int_map.find(look_ssn) != int_map.end()) cout << int_map.at(look_ssn);
			else  continue;
		}
		//otherwise find by name and continue
		if(string_map.find(look_name) != string_map.end()) cout << string_map.at(look_name);
		else continue;
	}
	clock_t end_time = clock();
	cout << "Runtime: " << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << " ms" << endl;
}
