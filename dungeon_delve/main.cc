#include "tree.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	Ent Shadowfax;
	char data;
	string data_2;
	while(cin){
		cin.get(data);
		if(isdigit(data)) break;
		data = toupper(data);
		Shadowfax.insert(data);
	}
	Ent_node *root = Shadowfax.root;
	cin.ignore();
	getline(cin,data_2);
	for(auto &i: data_2){
		i = toupper(i);
		if(!Shadowfax.search(i)) Shadowfax.n_solv();
	}
	int i = 0;
	while(i < data_2.size()){
		char extract = data_2.at(i);
		Shadowfax.dungeon(extract,root);
		i++;
	}
	cout << "Exit the dungeon!" << endl;
}
