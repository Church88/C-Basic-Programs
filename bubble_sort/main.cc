//Bubble sort implementation
//Loop through the input array, find the maximum element and put it into the sorted_array
// and then clear the maximum element from the read_array
// Jason  Demarius Burgess
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX_SIZE = 100;

//Array contains the array we're searching through
//arr_size is the size of the array
//We will write the index of the maximum number into index_no
void max_element(int sorted_array2[], int j, int &index_no) {
	int temp = sorted_array2[0];
	index_no=0;
	for(int i = 0; i <= j; i++){
		if(sorted_array2[i]<temp){
			temp = sorted_array2[i];
			index_no = i;
		}
	}
}

int main() {
	//First read in numbers until a 0 is read
	int numbers_read = 0;
	int read_array[MAX_SIZE] = {};
	cout << "Please insert numbers to sort (0 to end)\n";
	while (cin) {
		int temp;
		cin >> temp;
		if (!cin || temp == 0 || numbers_read >= MAX_SIZE) break;
		read_array[numbers_read++] = temp;
	}
	//Print out inputs
	cout << "You have entered the following array: " << endl;
	for (int i = 0; i < numbers_read; i++)
		cout << "Element " << i << ": " << read_array[i] << endl;
	//Bubble Sort
	int sorted_array[MAX_SIZE] = {};
	bool made_swaps = true;
	for(int i = 0; i < numbers_read; i ++)
		sorted_array[i] = read_array[i];
	for (int i = numbers_read-1; i > 0; i--) {
		if(made_swaps==false)
			break;
		made_swaps = false;
		for(int j = 0; j < i; j++){
			if(sorted_array[j]<sorted_array[j+1]){
				swap(sorted_array[j],sorted_array[j+1]);
				made_swaps = true;
			}
		}
	}
	//Selection Sort
	int index_no = 0;
	int sorted_array2[MAX_SIZE] = {};
	for(int i = 0; i < numbers_read; i ++)
		sorted_array2[i] = read_array[i];
	for(int j = numbers_read-1; j >= 0; j --){
		max_element(sorted_array2,j,index_no);
		swap(sorted_array2[j],sorted_array2[index_no]);
	}
	//Print out bubble sort followed by selection sort
	cout << "Here is the sorted array: " << endl;
	for (int i = 0; i < numbers_read; i++)
		cout << "Element " << i << ": " << sorted_array[i] << endl;
	cout << "Here is the sorted array: " << endl;
	for (int i = 0; i < numbers_read; i++)
		cout << "Element " << i << ": " << sorted_array2[i] << endl;

}
