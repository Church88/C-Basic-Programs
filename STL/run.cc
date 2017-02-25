#include <unordered_map>
#include <set>
#include <functional>
#include <numeric>
#include <list>
#include <map>
#include <deque>
#include <unordered_set>
#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

void outputter(int n) {
	cout << n << " ";
}

int increase_by_ten(int n) {
	return n+10;
}

int limit = 1000;
char RANDOM_STR(){return rand()%10;}
int RANDOM(){
	float num = rand()%limit+1;
	return num/(limit*10);
}

int main() {
array<int,1000> arr;

generate(arr.begin(),arr.end(),rand);
/*	srand(time(NULL));
	clock_t start_time;
	clock_t end_time;
	for(int i = 1; i < 11; i++){
		cout << i << endl;
		//GENERATE
		start_time = clock();
		int SIZE = i*10000;
		deque<int> TIT(SIZE);
		generate(TIT.begin(),TIT.end(),RANDOM);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//COUNT
		start_time = clock();
		int countme = RANDOM();
		int mycount = count(TIT.begin(),TIT.end(),countme);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//PARTIAL SUM
		start_time = clock();
		deque<int> FUCKET(SIZE);
		partial_sum(TIT.begin(),TIT.end(),FUCKET.begin());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//ACCUMULATE
		start_time = clock();
		int runningt = 0;
		int sum = accumulate(TIT.begin(),TIT.end(),runningt);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//REVERSE
		start_time = clock();
		reverse(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//ROTATE
		start_time = clock();
		int midpoint = (SIZE/2)-1;
		rotate(TIT.begin(),TIT.begin()+midpoint,TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//SORT
		start_time = clock();
		sort(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//RANDOM_SHUFFLE
		start_time = clock();
		random_shuffle(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//STABLE_SORT
		start_time = clock();
		stable_sort(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//ADJACENT_DIFFERENCE
		start_time = clock();
		adjacent_difference(TIT.begin(),TIT.end(),FUCKET.begin());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//INNER_PRODUCT
		start_time = clock();
		int intial = 0;
		inner_product(TIT.begin(),TIT.end(),FUCKET.begin(),intial);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//UNIQUE
		start_time = clock();
		unique(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;

	}
	//because why not another for loop for lists
/*	for(int i=1;i<11;i++){
		cout << i << endl;
		//GENERATE
		start_time = clock();
		int SIZE = i*10000;
		list<int> TIT(SIZE);
		generate(TIT.begin(),TIT.end(),RANDOM);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//COUNT
		start_time = clock();
		int countme = RANDOM();
		int mycount = count(TIT.begin(),TIT.end(),countme);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//PARTIAL SUM
		start_time = clock();
		list<int> FUCKET(SIZE);
		partial_sum(TIT.begin(),TIT.end(),FUCKET.begin());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//ACCUMULATE
		start_time = clock();
		int runningt = 0;
		int sum = accumulate(TIT.begin(),TIT.end(),runningt);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//REVERSE
		start_time = clock();
		reverse(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Rotate
		start_time = clock();
		auto it = TIT.begin();
		advance (it,distance(TIT.begin(),TIT.end())/2);
		rotate(TIT.begin(),it,TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Sort
		start_time = clock();
		TIT.sort();
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Random_shuffle
		start_time = clock();
		vector<int> fixit{begin(TIT),end(TIT)};
		random_shuffle(fixit.begin(),fixit.end());
		copy(fixit.begin(),fixit.end(),back_inserter(TIT));
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Stable_sort
		start_time = clock();
		vector<int> fixit2{begin(TIT),end(TIT)};
		stable_sort(fixit.begin(),fixit.end());
		copy(fixit.begin(),fixit.end(),back_inserter(TIT));
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Adjacent Difference
		start_time = clock();
		adjacent_difference(TIT.begin(),TIT.end(),FUCKET.begin());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Inner Product
		start_time = clock();
		int initial = 0;
		inner_product(TIT.begin(),TIT.end(),FUCKET.begin(),initial);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//UNIQUE
		start_time = clock();
		unique(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
	}
	//and another for  cause they dont work either
/*	for(int i=1;i<11;i++){
		cout << i << endl;
		const int SIZE = i*10000;
		unordered_multimap<int,int> TIT;
		for(int i=0;i<SIZE;i++){
			TIT.emplace(RANDOM(),RANDOM());
		}
		//COUNT
		start_time = clock();
		int countme = RANDOM();
		int mycount = TIT.count(countme);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//PARTIAL SUM
		vector<int> FUCKET (SIZE);
		vector<int> fixit;
		start_time = clock();
		for(auto it = TIT.begin(); it != TIT.end(); ++it){
			fixit.push_back(it->second);
		}
		partial_sum(fixit.begin(),fixit.end(),FUCKET.begin());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//ACCUMULATE
		int runningt = 0;
		start_time = clock();
		int sum = accumulate(fixit.begin(),fixit.end(),runningt);
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//REVERSE
		map<int,int> TIT2;
		start_time = clock();
		for(auto it = TIT.begin(); it != TIT.end(); ++it){
			TIT2.emplace(it->first,it->second);
		}
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
/*		//UNIQUE
		start_time = clock();
		unique(TIT.begin(),TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Rotate
		start_time = clock();
		auto it = TIT.begin();
		advance (it,distance(TIT.begin(),TIT.end())/2);
		rotate(TIT.begin(),it,TIT.end());
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Sort
		start_time = clock();
		TIT.sort();
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Random_shuffle
		start_time = clock();
		vector<int> fixit{begin(TIT),end(TIT)};
		random_shuffle(fixit.begin(),fixit.end());
		copy(fixit.begin(),fixit.end(),back_inserter(TIT));
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;
		//Stable_sort
		start_time = clock();
		vector<int> fixit2{begin(TIT),end(TIT)};
		stable_sort(fixit.begin(),fixit.end());
		copy(fixit.begin(),fixit.end(),back_inserter(TIT));
		end_time = clock();
		cout << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;

	}*/
}
