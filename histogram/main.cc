#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <iterator>
#include <array>
using namespace std;

bool rec = false;
const int ASCII = 127;
void die(){
	cout << "Die was called check your shit\n";
	exit(1);
}

class Heap_node{
	public:
		char payload = ' ';
		int reps = 0;
		Heap_node():payload(' '),reps(0){}
		Heap_node(char new_payload, int new_reps):payload(new_payload),reps(new_reps){}
};
class Heap{
	public:
		vector<Heap_node>pile;
		Heap(){}
		int left(int parent){
			int x = (2*parent)+1;
			return x;
		}
		int right(int parent){
			int x = (2*parent)+2;
			return x;
		}
		int parent(int child){
			int x = (child-1)/2;
			return x;
		}
		void fall(int index){
			int minindex = index;
			Heap_node temp = pile.at(index);
			if(left(index) > size()-1){
				return; //reached leaf
			}
			Heap_node child_1 = pile.at(left(index));
			if(child_1.reps > temp.reps){
				minindex = left(index);
			}
			if(child_1.reps == temp.reps && child_1.payload < temp.payload){
				minindex = left(index);
			}
			if(right(index) < size()){
				Heap_node child_2 = pile.at(right(index));
				if(child_2.reps > child_1.reps && child_2.reps > temp.reps){
						minindex = right(index);
				}
				if(child_2.reps == temp.reps && child_2.payload < temp.payload && child_2.payload < child_1.payload){
					minindex = right(index);
				}
			}
			if(minindex != index){
				pile.at(index) = pile.at(minindex);
				pile.at(minindex) = temp;
				fall(minindex);
			}
		}
		void rise(int index){
			if(index == 0) return;
			if (pile.at(index).reps == pile.at(parent(index)).reps){
				if(pile.at(index).payload < pile.at(parent(index)).payload){
					Heap_node hold = pile.at(parent(index));
					pile.at(parent(index)) = pile.at(index);
					pile.at(index) = hold;
					rise(parent(index));
				}
			}
			if(pile.at(parent(index)).reps < pile.at(index).reps){
				Heap_node hold = pile.at(parent(index));
				pile.at(parent(index)) = pile.at(index);
				pile.at(index) = hold;
				rise(parent(index));
			}
		}
		void truth(){
			for(int i = size()/2; i >= 0; i--){
				fall(i);
			}
		}
		void push(Heap_node node){
			pile.push_back(node);
			rise(size()-1);
		}
		void print() {
			cout << pile.at(0).payload << " : " << pile.at(0).reps << endl;
			int x = 2;
			int j = 1;
			bool done = false;
			while(true){
				for(int i = 0; i < x ; i++){
					if(j >= size()){
						done = true;
						break;
					}
					cout << pile.at(j).payload << " : " << pile.at(j).reps << "\t";
					j++;
				}
				cout << endl;
				if(done) return;
				x *= 2;
			}
		}
		void max(){
			if(size() > 0) cout << pile.at(0).payload << ": " << pile.at(0).reps << endl;
		}
		void pop(){
			if(size() == 1){
				max();
				pile.pop_back();
			}
			else{
				max();
				pile.at(0) = pile.at(size()-1);
				pile.pop_back();
				fall(0);
			}
		}
		int size(){
			return pile.size();
		}
};
int main() {
	Heap Shit;
	cout << "Please enter a filename\n";
	string filename;
	cin >> filename;
	ifstream ins(filename);
	if(!ins) return -1;
	char input = ' ';
	int ascii = 0;
	vector<int> setup(ASCII,0);
	while(ins){
		ins.get(input);
		if (!ins) break;
		ascii = input;
		if(ascii > 127 || ascii < 0)continue;
		setup.at(ascii)++;
	}
	ins.close();
	int count;
	for(int i = 0; i < ASCII; i++){
		if(setup.at(i) != 0){
			count = setup.at(i);
			cout << char(i) << ": " << count << endl;
			Heap_node node = Heap_node(char(i),count);
			Shit.push(node);
		}
	}
	Shit.truth();
	cout << "Do you wish to sort by count?\n";
	cin >> input;
	input = toupper(input);
	if(input != 'Y') return 0;
	if(Shit.size() == 0) return 0;
	if(input == 'Y'){
		//cout << Shit.size() << endl;
		//Shit.print();
	//	int size = Shit.size();
	//	for(int i = 0; i < size; i ++){
	//		Shit.pop();
			//Shit.truth();
			//Shit.fall(0);
	//	}
		for(int i = 0; i < Shit.size(); i++){
			cout << Shit.pile.at(i).payload << ": " << Shit.pile.at(i).reps << endl;
		}
	}
	return 0;
}
