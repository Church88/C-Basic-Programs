#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctime>
#include <cstdlib>
using namespace std;

void output(string x){
	cout << x;
}

int main () {
	//srand(time(NULL));
	srand(0);
	cout << "Please enter a file name to edit:\n";
	string filename;
	cin >> filename;
	ifstream ins(filename);
	if (!ins) return -1;
	char read;
	string sent;
	vector<string> stringvec;
	while(ins){
		ins.get(read);
		sent += read;
		if(read == '!' || read == '.' || read == '?' || read == '\n'){
			stringvec.push_back(sent);
			sent = {};
		}
	}
	ins.close();
	vector<int> numvec;
	for(int i=1;i<stringvec.size();i++)numvec.push_back(i);
	random_shuffle(numvec.begin(),numvec.end());
	string test;
	int i = 1;
	vector<int> reference;
	bool contents = false;
	for(auto j: numvec){
		test = stringvec.at(j-1);
		auto rit = test.rbegin();
		int found = test.find_first_not_of(" '\t'");
		for(int i = 0; i < test.size(); i ++){
			if(!isspace(test.at(i))){
				contents = true;
				break;
			}
		}
		if(*rit == '\n' && contents){
			cout << i << ": ";
			for(int i=0;i<test.size()-found;i++){
				cout << test.at(i+found);
			}
			reference.push_back(j-1);
			i++;
			contents = false;
		}
		if(*rit != '\n' && contents){
			cout << i << ": ";
			for(int i=0;i<test.size()-found;i++){
				cout << test.at(i+found);
			}
			cout << endl;
			reference.push_back(j-1);
			i++;
			contents = false;
		}
	}
	int sentnum;
	string newsent;
	bool newline = false;
	string nl;
	while(true){
		i = 1;
		cout << "Please enter a sentence number to edit (-1 to quit):\n";
		cin >> sentnum;
		if(sentnum == -1)break;
		cout << "Please enter the new sentence for sentence " << sentnum << ":\n";
		sentnum--;
		nl = stringvec.at(reference.at(sentnum));
		auto rit2 = nl.rbegin();
		if(*rit2 == '\n') newline = true;
		cin.clear();
		cin.ignore();
		getline(cin,newsent);
		if(newline) newsent += '\n';
		stringvec.at(reference.at(sentnum)) = newsent;
		newline = false;
		for(auto j: numvec){
			test = stringvec.at(j-1);
			auto rit = test.rbegin();
			if(*rit == '\n' && test.size() > 1){
				cout << i << ": " << test;
				i++;
			}
			if(*rit != '\n' && test.size() > 1){
				cout << i << ": " << test << endl;
				i++;
			}
		}
	}
	//cout << sizeof(stringvec) << endl;
	stringvec.pop_back();
	ofstream outs(filename);
	for(auto i: stringvec)outs << i;
	outs.close();
}

 
