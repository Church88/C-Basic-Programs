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

int main() {
	//Capture the start time
	clock_t start_time = clock();

	vector<int> vec;
	for (int i = 0; i < 5; i++) vec.push_back(i); // = { 0, 1, 2, 3, 4 };
	vector<int> vec2 = { 10,20,30,40,50,42 };

	cout << "---------------ITERATORS----------------\n";
	cout << "Output vec one way, using iterators: ";
	for (auto it = vec.begin(); it != vec.end(); it++) cout << *it << " ";
	cout << endl;

	cout << "And again using a free function: ";
	for (auto it = begin(vec); it != end(vec); it++) cout << *it << " ";
	cout << endl;

	cout << "And again using a constant iterator: ";
	for (auto it = vec.cbegin(); it != vec.cend(); it++) cout << *it << " ";
	cout << endl;

	cout << "Output it the reverse way, using reverse iterators: ";
	for (auto it = vec.rbegin(); it != vec.rend(); ++it) cout << *it << " "; 
	cout << endl;

	cout << "And again in reverse with a constant reverse iterator: ";
	for (auto it = vec.crbegin(); it != vec.crend(); it++) cout << *it << " ";
	cout << endl;

	cout << "\nCalling transform on vec to increment each element by 10.\n";
	transform(vec.begin(),vec.end(),vec.begin(), increase_by_ten );

	cout << "Output vec using a for_each loop: ";
	for_each(vec.begin(),vec.end(),outputter);
	cout << endl;
	cout << "--------------RANGE BASED FOR LOOP------\n";

	cout << "Output vec2, using range-based for loop: ";
	for (auto a : vec2) cout << a << " ";
	cout << endl;

	cout << "Writing each value from vec into vec2, using a lambda to increase each element by 100.\n";
	transform(vec.begin(),vec.end(),vec2.begin(), [](int n) { return n+100; } );

	cout << "Outputting vec2 using a lambda expression: ";
	for_each(vec2.begin(),vec2.end(),[](int n){ cout << n << " ";} );
	cout << endl;
	cout << "--------------GENERATE VECTOR-----------\n";
	cout << "Calling iota() on vec2, starting at -30.\n";
	iota(vec2.begin(),vec2.end(),-30);
	for_each(vec2.begin(),vec2.end(),[](int n){ cout << n << " ";} );
	cout << endl;

	cout << "Calling generate() on vec2, passing in rand().\n";
	srand(time(NULL));
	generate(vec2.begin(),vec2.end(),rand);
	for_each(vec2.begin(),vec2.end(),[](int n){ cout << n << " ";} );
	cout << endl;
	cout << "---------------FILL VECTOR--------------\n";

	cout << "Expanding vec2 to 10 elements (setting new elements to 123).\n";
	vec2.resize(10,123);
	for_each(vec2.begin(),vec2.end(),[](int& n){ cout << n++ << " ";} );
	cout << endl;
	cout << "Calling fill (321) on the back three.\n";
	fill(vec2.begin()+7,vec2.end(),321);
	for_each(vec2.begin(),vec2.end(),[](int n){ cout << n << " ";} );
	cout << endl;

	cout << "---------------STRINGS------------------\n";
	string test = "Hello, my name is Ada Bee, I know all the letters from A to B.";
	cout << "Test: " << test << endl;
	cout << "The first \"Ada\" is at: " << test.find("Ada") << endl;
	cout << "Substring from \"Ada\" on: " << test.substr(test.find("Ada")) << endl;
	cout << "Changing \"Bee\" to \"Kerney\": " << test.replace(test.find("Bee"),strlen("Bee"),"Kerney") << endl;
	cout << "Uppercasing all from I on: ";
	transform(test.begin()+test.find("I"),test.end(),test.begin() + test.find("I"), ::toupper);
	cout << test << endl;

	cout << "----------------ARRAYS------------------\n";
	array<int,20> arr = {1,2,3,4,10,11,12,13,3,2,1,10,11,12,11,10};
	cout << "Arr: ";
	for (auto i:arr) cout << i << " ";
	cout << endl;
	cout << "Replacing 10 with 100 in the second half only.\n";
	replace(arr.begin()+arr.size()/2,arr.end(),10,100);
	cout << "Arr.at(5): " << arr.at(5) << endl;
	cout << "Arr.begin()+5: " << *(arr.begin()+5) << endl;
	cout << "Arr: ";
	for (auto i:arr) cout << i << " ";
	cout << endl;
	cout << "Max element of arr is: " << *max_element(arr.begin(),arr.end()) << endl;
	cout << "Min element of arr is: " << *min_element(arr.begin(),arr.end()) << endl;

	int arr2[] = {1,2,3,4,5,6,7,8,9,10}; //Note how we can get "iterators" from it
	cout << "Arr2: ";
	for (auto i:arr2) cout << i << " ";
	cout << endl;
	cout << "Elements in arr2: " << sizeof(arr2)/sizeof(int) << endl;
	cout << "*Begin(arr): " << *begin(arr2) << endl;
	cout << "Max element of arr2 is: " << *max_element(arr2,arr2+5) << endl;
	cout << "Max element of arr2 is: " << *max_element(arr2,arr2+sizeof(arr2)/sizeof(int)) << endl;
	cout << "Min element of arr2 is: " << *min_element(arr2,arr2+sizeof(arr2)/sizeof(int)) << endl;

	//Capture the end time
	clock_t end_time = clock();
	cout << "Total running time: " << end_time - start_time << " ticks.\n";
}
