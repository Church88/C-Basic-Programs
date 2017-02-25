#include <iostream>
#include <cstdlib>
#include <ctime>
#include <csignal>
using namespace std;

void wait_three_seconds() {
	clock_t start = clock();
	while ((clock() - start)/CLOCKS_PER_SEC < 3);
	 //Do nothing
}

const int  CLOSED = 0;
const int OPENING = 1;
const int OPEN = 2;
const int CLOSING = 3;
int state = CLOSED;

void signal_handler(int signal) {
	cout << "Interrupt received" << endl;

		if(state==CLOSED){
			state=OPENING;
			cout << "OPENING" << endl;
			wait_three_seconds();
			state=OPEN;
			cout << "OPEN" << endl;
			wait_three_seconds();
			state=CLOSING;
			cout << "CLOSING" << endl;
			wait_three_seconds();
			state=CLOSED;
			cout << "CLOSED" << endl;
			}
		else if(state==OPEN){
			wait_three_seconds();
			state=CLOSING;
			cout << "CLOSING" << endl;
			wait_three_seconds();
			state=CLOSED;
			cout << "CLOSED" << endl;
			}
		else if(state==CLOSING&&CLOCKS_PER_SEC < 3){
			state=OPENING;
			cout << "OPENING" << endl;
			wait_three_seconds();
			state=OPEN;
			cout << "OPEN" << endl;
			state=CLOSING;
			wait_three_seconds();
			state=CLOSED;
			cout << "CLOSED" << endl;
			}
}
int main() {
    signal(SIGINT,signal_handler);
//	system("CLS");
	string input;
	cout << "CLOSED" << endl;
	while(cin){
		cin >> input; //Read a command
		if(input=="quit") break;
		}
		//Handle state transitions here
}

