//Lee, Ruiz
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

//Size of the board
const int MAX_SIZE = 6;
const char EMPTY = '.';
const char AI = '*'; //The appearance of the AI on the board

//Extra credit: Print out the row and column numbers and/or make it look pretty
void print_array(char arr[][MAX_SIZE]) {
	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			cout << arr[i][j];
			//YOU: Print out the array values here
		}
		cout << endl;
	}
}

//Initializes the array to make it ready for a new game
void clear_array(char arr[][MAX_SIZE]) {
	for (int i = 0; i < MAX_SIZE; i++) {
		for (int j = 0; j < MAX_SIZE; j++) {
			arr[i][j] = EMPTY;
		}
	}
}

//Will examine a board to see if there's a winning position
//A winning position is a horizontal row or vertical column all with the same letter
// in it. Letter '.' means an empty space, so don't win if we have five .'s in a row.
//Return true if there's a winner, false otherwise.
//Write the winning character into the winner parameter
//If the board is invalid (two+ winners, etc.) set error to true, otherwise false
bool check_winner(char arr[][MAX_SIZE], char &winner, bool &error) {
	char temp;
	int win_count = 0; // Count of similar characters
	for(int i = 0; i < MAX_SIZE; i++){ // Check diagonal start from (0,0)
		if(arr[i][i]==EMPTY)
			break;
		else if(i==0){
			temp = arr[i][i];
			win_count++;
		}
		else if(i!=0&&temp==arr[i][i])
			win_count++;
		if(win_count==MAX_SIZE){
			winner=temp;
			return true;
		}
	}
	win_count = 0;
	for(int i = 0; i < MAX_SIZE; i++){ // Check diagonal start from (0,4)
		if(arr[i][MAX_SIZE-1-i]==EMPTY)
			break;
		else if (i==0){
			temp = arr[i][MAX_SIZE-1-i];
			win_count++;
		}
		else if(i!=0&&temp==arr[i][MAX_SIZE-1-i])
			win_count++;
		if(win_count==MAX_SIZE){
			winner=temp;
			return true;
		}
	}
	win_count = 0;
	for(int i = 0; i < MAX_SIZE; i++){
		for(int j = 0; j < MAX_SIZE; j++){
			if(arr[i][j]==EMPTY)
				break;
			else if (j==0){
				temp = arr[i][j];
				win_count++;
			}
			else if(j!=0&&temp==arr[i][j]){
				win_count++;
			}
			if(win_count==MAX_SIZE){
				winner=temp;
				return true;
			}
		}
		win_count = 0;
	}
	win_count = 0;
	for(int j = 0; j < MAX_SIZE; j++){
		for(int i = 0; i < MAX_SIZE; i++){
			if(arr[i][j]==EMPTY)
				break;
			else if(i==0){
				temp = arr[i][j];
				win_count++;
			}
			else if(i!=0&&temp==arr[i][j]){
				win_count++;
			}
			if(win_count==MAX_SIZE){
				winner=temp;
				return true;
			}
		}
		win_count = 0;
	}
	//YOU: Write all this
	return false;
}
void waiter(string error = " ") {
	cout << error << "Press any key to continue.\n";
	string nothing;
	cin >> nothing;
}

int main() {
	system("clear"); //Clear the screen
	char arr[MAX_SIZE][MAX_SIZE] = {}; //= {} means initialize to zero
	srand(time(NULL)); //Initialize the random number generator
	//Start with empty board
	clear_array(arr);
	bool AI_turn = false;
//	bool AAM_ON = false;
	cout << "Enter ACTIVATE to enable AI, otherwise press any key" << endl; // AI mode prompt
	string AI_mode;
	cin >> AI_mode;
	if(AI_mode=="ACTIVATE"){
		AI_turn = true; // Insitute AI input
		system("clear"); //Clear the screen
		waiter ("AI mode activated, warning program is now self aware\n");
		system("clear"); //Clear the screen
	/*	cout << "Enter DESTROY ALL HUMANS to enter Advance AI Mode\n"; //Just because
		string AAM;
		cin >> AAM;
		if(AAM=="DESTROY ALL HUMANS"){
			AAM_ON = true;
			waiter("AAM is now on prepare to be destroyed\n");
			}
		else{
			system("clear"); //Clear the screen
			waiter("Proceed yee feeble mortal\n");
			}
	*/	}
	else
		waiter("Continue without AI. ");
	while (true) {
		system("clear"); //Clear the screen
		print_array(arr);

		//Handle input and check for errors
		cout << "Input x and y coordinates followed by a letter (letter 'Q' to quit): ";
		int x = 0,y = 0;
		char input = ' ';
//		cout << input << " " << x << " " << y << endl;
		cin >> y;
		if (!cin){
			exit(EXIT_FAILURE);
			cout << "y is invalid" << endl;
			}
		cin >> x;
		if (!cin){
			exit(EXIT_FAILURE);
			cout << "x is invalid" << endl;
			}
		cin >> input;
		if (!cin){
			exit(EXIT_FAILURE);
			cout << "input is invalid" << endl;
			}
		if (input == 'Q')exit(EXIT_SUCCESS);
		if (!isalpha(input)){
			exit(EXIT_FAILURE);
			cout << "input is not a letter" << endl;
			}

		//YOU: Check to see if the coordinate is out of bounds
		if (x>(MAX_SIZE-1) || x<0 || y>(MAX_SIZE-1) || y<0) {
			waiter("That coordinate is out of bounds. "); //Pause
			continue; //Let them reenter the move
		}
		//YOU: Check for the spot being filled already
		if (arr[x][y]!=EMPTY) {
			waiter("That spot is already taken. "); //Pause
			continue; //Let them reenter the move
		}
	//	else {
		//	if(AAM_ON)
		//		arr[x][y] = AI;
			else
				arr[x][y] = input;
			//YOU: Enter the move onto the board here
	//	}
		char winner;
		bool error = false;
		if (check_winner(arr, winner, error)) {
			//Print win message and/or error message here
			system("clear"); //Clear the screen
			print_array(arr);
			if (error) cout << "Error: Multiple winners!\n";
			else {
				if (winner == AI)
					cout << "Failure! The AI has beaten you!\n";
				else
					cout << "Congrats! Player " << winner << " has won!\n";
				exit(EXIT_SUCCESS);
			}
		}
	 //Pause
		//Extra Credit: Write an AI to play against you
		if(AI_turn){ // AI move
			for(int i = 0; i < MAX_SIZE*MAX_SIZE; i ++){
				int AI_1 = rand()%MAX_SIZE;
				int AI_2 = rand()%MAX_SIZE;
				if(arr[AI_1][AI_2]==EMPTY){
					arr[AI_1][AI_2] = AI;
					break;
					}
				}
			}
	}
}
