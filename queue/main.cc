#include <algorithm>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "queue.h"
using namespace std;

void uppercaseify(string& mystr);

int main(int argv, char* argc[]) {
	/* Uncomment this section to see how argc and argv works,
	 * just be sure to comment it back out before the deadline...
	cout << "Argv: " << argv << endl;
	for (int i = 0; i < argv; i++)
		cout << "Argc[" << i << "]: " << argc[i] << endl;
	*/
	

	//If we have any command line parameters, time the run
	bool will_clock = false;
	if (argv > 1) will_clock = true; 

	//If the person does not enter a command line parameter
	//default to array version
	int mode = Queue::ARRAY_MODE;
	if (argv > 1) mode = atoi(argc[1]); //Allow user to change mode from command line.
	if (mode < Queue::LINKED_LIST_MODE || mode > Queue::VECTOR_MODE)
		mode = Queue::ARRAY_MODE;

	/* Uncomment this section to see what parameters we'll be using
	 * again, be sure to comment it back out before turning in your homework
	cout << "will_clock: " << boolalpha << will_clock << endl;
	cout << "mode: " << mode << endl;
	*/

	Queue myqueue(mode);
	string operation;
	int data;

	//Capture the start time
	clock_t start_time = clock();

	while (cin) {
		cin >> operation;
		uppercaseify(operation);
		if (!cin || cin.eof() || operation == "QUIT") {
			break;
		}
		if (operation == "STATUS") {
			cout << myqueue.get_queue_size() << endl;
		}
		if (operation == "PRINT") {
			myqueue.print_queue();
		}
		if (operation == "PUSH") {
			cin >> data;
			myqueue.push(data);
		}
		if (operation == "POP") {
			data = myqueue.pop();
			cout << data << endl;
		}
		if (operation == "SEARCH") {
			cin >> data;
			if (myqueue.search(data))
				cout << "IN QUEUE\n";
			else
				cout << "NOT IN QUEUE\n";
		}
		if (operation == "REMOVE") {
			cin >> data;
			if (myqueue.remove(data))
				cout << "REMOVED\n";
			else
				cout << "NOT REMOVED\n";
		}
	}

	//Capture the finish time, then output the time elapsed
	//We will write it to cerr so that we can see it even when writing the file to an outputfile
	clock_t end_time = clock();
	if (will_clock) 
		cerr << 1000*(double(end_time - start_time)/CLOCKS_PER_SEC) << endl;

	return 0;
}

void uppercaseify(string& mystr) {
	for (auto& c: mystr)
		c = toupper(c);
}
