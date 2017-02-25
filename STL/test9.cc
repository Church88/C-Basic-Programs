#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <list>
#include <deque>
using namespace std;

int main()
{
	vector<int> fib(100,1);
	adjacent_difference(fib.begin(), fib.end() - 1, fib.begin() + 1, plus<int>());

	for (unsigned int i = 0; i < fib.size(); i++) {
		    cout << "Fib " << i << " = " << fib[i] << endl;
	}
	return 0;

    vector<int> v(10, 2); //Create a vector of 10 2s. 
	cout << "Initial Array:\n";
	for (int i : v) cout << i  << endl;
    partial_sum(v.cbegin(), v.cend(), v.begin()); //Sets each selement to the sum of all elements to that point
	cout << "\nAfter Partial Sum:\n";
	for (int i : v) cout << i  << endl;
    //Try this!
	//copy(v.cbegin(), v.cend(), ostream_iterator<int>(std::cout, " "));

	//Try these different options...
	//list<int> diff(10);
	//vector<int> diff(10);
	//vector<int> diff = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	array<int,10> diff;
	//deque<int> diff(10);
	iota(diff.begin(),diff.end(),100); //Fill it with 100, 101, 102, 103
	cout << "A new data structure initialized with iota(100):\n";
	for (int i : diff) cout << i << endl;
	partial_sum(diff.cbegin(),diff.cend(),v.begin()); //Partial Sum Diff and save results into v
	cout << "The results partially summed:\n";
	for (int i : v) cout << i << endl;
	cout << "The result fully summed via accumulate:\n";
	int total = accumulate(diff.begin(),diff.end(),0); //Start with the sum equal to 0.
	cout << total << endl;
	cout << "Calculating the adjacent differences of the partially summed array:\n";
	adjacent_difference(v.cbegin(),v.cend(),diff.begin()); //Store the results into diff
	for (int i : diff) cout << i << endl;


 
    if (all_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 0; })) {
        cout << "All numbers are even\n";
    }
    if (none_of(v.cbegin(), v.cend(), [](int i){ return i % 2 == 1; })) {
        cout << "None of them are odd\n";
    }
    if (any_of(v.cbegin(), v.cend(),[](int i){ return i % 7 == 0; })) {
        cout << "At least one number is divisible by 7\n";
    }
}
