#include <iostream>
using namespace std;
int main () {

cout <<"Enter number to add (-1 to quit)\n";

int running_total = 0;

while (true) {
	int input;
	cin >> input;
	if (!cin) break;
	if (input==-1) break;
	else
		running_total=input+running_total;
		}
	cout << running_total << endl;


return 0;
}
