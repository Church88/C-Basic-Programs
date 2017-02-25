//LEE
#include <iostream>
#include <cctype>
#include <array>

using namespace std;
unsigned int start_x = 0;
unsigned int start_y;
int end_y = 0;
int end_x = 0;
const char player = 'x';
const unsigned int SIZE = 50;
const char EMPTY = '.';
const char START = '@';
const char END = '$';
const char CHECKER = '*';
const int REFRESH = 100000;
const char WALL = '#';

void print_board(char board[][SIZE]){
	for (int i = 0; i <SIZE+2; i ++)
		cout << WALL; cout << endl;
	for (int i = 0; i < SIZE; i ++){
		cout << WALL;
		for (int j = 0; j <SIZE; j ++){
			cout << board[i][j];
		}
		cout << WALL << endl;
	}
	for (int i = 0; i < SIZE+2; i ++)
		cout << WALL; cout << endl;
}

void pause (int ticks){
	clock_t start = clock(); while ((clock() - start) < ticks);
}

bool solve(char board[SIZE][SIZE], int  end_x, int  end_y, int X, int Y){
	if(X < 0 || X > SIZE-1 || Y < 0 || Y > SIZE-1) return false;
	board[X][Y] = CHECKER;
	system("clear");
	print_board(board);
	if (X > 0 && board[X-1][Y] == END) {
		return true;
	}
	if (X < SIZE-1 && board[X+1][Y] == END) {
		return true;
	}
	if (Y > 0 && board[X][Y-1] == END) {
		return true;
	}
	if (Y < SIZE-1 && board[X][Y+1] == END) {
		return true;
	}
	pause(REFRESH);
	if(X >= 0 && board[X+1][Y] == EMPTY && solve(board,end_x,end_y,X+1,Y))
		return true;
	if(X <= SIZE-1 && board[X-1][Y] == EMPTY && solve(board,end_x,end_y,X-1,Y))
		return true;
	if(Y >= 0 && board[X][Y+1] == EMPTY && solve(board,end_x,end_y,X,Y+1))
		return true;
	if(Y <= SIZE-1 && board[X][Y-1] == EMPTY && solve(board,end_x,end_y,X,Y-1))
		return true;
	board[X][Y] = EMPTY;
	system("clear");
	print_board(board);
	pause(REFRESH);
	return false;
}

void die() {
	cout << "Invalid input.\n"; exit(EXIT_FAILURE);
}

void clear_board(char board [][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			board[i][j] = EMPTY;
		}
	}
}

void waiter(string error = " ") {
	cout << error << "Press any key to continue.\n";
	string nothing;
	cin >> nothing;
}

bool spot_check(int x, int y, char board[][SIZE]){
	if(x >= SIZE || x < 0){
		cout << "Invalid input, please try again\n";
		return false;
	}
	if(y >= SIZE || y < 0){
		cout << "Invalid input, please try again\n";
		return false;
	}
	if(board[x][y]==WALL){
		cout << "Invalid input, space is a wall\n";
		return false;
	}
	else return true;
}

int main (){
	system("clear");
	char board[SIZE][SIZE] = {};
	char board2[SIZE][SIZE] = {};
	clear_board(board);
	clear_board(board2);
	print_board(board);
	while (cin){
		int x = 0;
		int y = 0;
		cout << "Please enter the walls of the maze (-1 to quit): ";
		cin >> x;
		if(!cin) die();
		if (x == -1) break;
		cin >> y;
		if (!cin) die();
		if(spot_check(x,y,board)==false) continue;
		else {
			board[x][y] = WALL;
			board2[x][y] = WALL;
		}
		system("clear");
		print_board(board);
	}
	system("clear");
	print_board(board);
	while(cin){
		cout << "Please enter the coordinates for the start point: ";
		cin >> start_x >> start_y;
		if(spot_check(start_x,start_y,board)==false) continue;
		board[start_x][start_y] = START;
		board2[start_x][start_y] = START;
		system("clear");
		print_board(board);
		break;
	}
	system("clear");
	print_board(board);
	while(cin){
		cout << "Please enter the coordinates for the end point: ";
		cin >> end_x >> end_y;
		if(!cin) die();
		if(spot_check(end_x,end_y,board)==false) continue;
		board[end_x][end_y] = END;
		board2[end_x][end_y] = END;
		system("clear");
		print_board(board);
		break;
	}
	int X = start_x;
	int Y = start_y;
	if(solve(board,end_x,end_y,X,Y)){
	    system("clear");
		print_board(board);
		cout << "Maze is solvable.\n";
    }
   	else{
		cout <<"Maze is unsovable :( \n";
		return 0;
	}
	//Enter open world mode
	waiter("Now it is your turn. Use the WASD keys to move\n");
	char move;
	int curr_x = start_x;
	int curr_y = start_y;
	board2[start_x][start_y] = START;
	board2[end_x][end_y] = END;
	while(true){
		pause(REFRESH*2);
		board2[curr_x][curr_y] = player;
		system("clear");
		print_board(board2);
		if (curr_x > 0 && board2[curr_x-1][curr_y] == END) {
			cout << "Congratulations you win! :)\n";
			break;
		}
		if (curr_x < SIZE-1 && board2[curr_x+1][curr_y] == END) {
			cout << "Congratulations you win! :)\n";
			break;
		}
		if (curr_y > 0 && board2[curr_x][curr_y-1] == END) {
			cout << "Congratulations you win! :)\n";
			break;
		}
		if (curr_y < SIZE-1 && board2[curr_x][curr_y+1] == END) {
			cout << "Congratulations you win! :)\n";
			break;
		}
		cin >> move;
		if(move=='w' && board2[curr_x-1][curr_y] == EMPTY && curr_x-1 >= 0){
			board2[curr_x][curr_y] = EMPTY;
			curr_x--;
		}
		if(move=='a' && board2[curr_x][curr_y-1] == EMPTY && curr_y-1 >= 0){
			board2[curr_x][curr_y] = EMPTY;
			curr_y--;
		}
		if(move=='s' && board2[curr_x+1][curr_y] == EMPTY && curr_x+1 < SIZE){
			board2[curr_x][curr_y] = EMPTY;
			curr_x++;
		}
		if(move=='d' && board2[curr_x][curr_y+1] == EMPTY && curr_y+1 < SIZE){
			board2[curr_x][curr_y] = EMPTY;
			curr_y++;
		}
//		if(spot_check(curr_x,curr_y,board2)){
//			cout << "Invalid move try again\n";
//			continue;
//		}
	}
}
