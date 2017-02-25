#include <iostream>
#include <cmath>
using namespace std;

int main () {
	const int ARRAY_SIZE = 200;
	float my_array[ARRAY_SIZE];
	float y;
	float V0;
	float t = 0.0;
	float a;
	cout << "Enter gravitational acceleration: ";
	cin >> a;
	cout << "Enter an intitial velocity: ";
	cin >> V0;
	for (int i = 0; i < ARRAY_SIZE; i ++){
		y = (V0*t) + (.5*a*pow(t,2));
		my_array[i]=y;
		if(y<0)	break;
		t +=.1;
	cout << my_array[i] << endl;
		}
	cout << "Baseball impact at time " << t << endl;
	return 0;
}
