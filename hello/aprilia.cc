#include <iostream>
#include <cmath>
using namespace std;

const int sizex = 3;
const int sizey = 3;

void check_diagonal (int board[sizex][sizey], int player1, int player2){
	int check_count = 0;
	for(int i = 0; i < sizex-1; i++){
		if (board[i][i]==1)
			player1 ++;
		if (board[i][i]==2)
			player2 ++;
		if(player1==3)
			cout << "Player 1 wins!" << endl;
		if(player2==3)
			cout << "Player 2 wins!" << endl;
	}
	for(int i = sizey-1; i > 0; i--){
		if (board[i][sizey-1-i]==1)
			player1 ++;
		if (board[i][i]==2)
			player2 ++;
		if(player1==3)
			cout << "Player 1 wins!" << endl;
		if(player2==3)
			cout << "Player 2 wins!" << endl;
	}
}
void check_updown (int board[sizex][sizey], int player1, int player2){
	int check_count = 0;
	for(int i = 0; i < sizex; i ++){
		for(int j = 0; j < sizey; j ++){
			if(board[i][j]==1)
				player1 ++;
			if(board[i][j]==2)
				player2 ++;
			if(player1==3)
				cout << "Player 1 wins!" << endl;
			if(player2==3)
				cout << "Player 2 wins!" << endl;
			check_count ++;
			if(check_count==sizex){
				player1 = 0;
				player2 = 0;
				check_count = 0;
			}
		}
	}
	int check_count1 = 0;
	for(int i = 0; i < sizey; i ++){
		for(int j = 0; j < sizex; j ++){
			if(board[j][i]==1)
				player1 ++;
			if(board[j][i]==2)
				player2 ++;
			if(player1==3)
				cout << "Player 1 wins!" << endl;
			if(player2==3)
				cout << "Player 2 wins!" << endl;
			check_count1 ++;
			if(check_count1==sizex){
				player1 = 0;
				player2 = 0;
				check_count = 0;
			}
		}
	}
}
void input_move(int turns, int x, int y, int board[sizex][sizey]){
	if (turns%2==0)
		board[x][y]=1;
	else
		board[x][y]=2;
}
int main () {
	int player1 = 0;
	int player2 = 0;
	cout << "Welcome to Tic Tac Toe" << endl;
	int board [sizex][sizey] ={};
	int turns = 0;
	int x, y;
	while (true){
		while(true){
			x=0;
			y=0;
			cout << "Player 1 input x and y coordinate" << endl;
			cin >> x >> y;
			if(cin!=int){
				cout << "Invalid input, please enter coordinates."  << endl;
				continue;
				}
			if(x<=sizex&&x>=1&&y<=sizex&&y>=1){
				if (board[x][y]==0){
					input_move(turns,x,y,board);
					check_updown(board,player1,player2);
					check_diagonal(board,player1,player2);
					break;
				}
				else{
					cout << "Sorry space is taken by player " << board[x][y] << " please try again."  << endl;
					continue;
				}
			}
			else
				cout << "Invalid input, please try again" << endl;
		}
		turns ++;
		while(true){
		x=0;
		y=0;
			cout << "Player 2 input x and y coordinate" << endl;
			cin >> x >> y;
			if(!cin){
				cout << "Invalid input, please enter coordinates."  << endl;
				continue;
				}
			if(x<=sizex&&x>=1&&y<=sizex&&y>=1){
				if (board[x][y]==0){
					input_move(turns,x,y,board);
					check_updown(board,player1,player2);
					check_diagonal(board,player1,player2);
					break;
				}
				else{
					cout << "Sorry space is taken by player " << board[x][y] << " please try again."  << endl;
					continue;
				}
			}
			else
				cout << "Invalid input, please try again" << endl;
		}
		turns ++;
		if (turns==8){
			cout << "Cats game!" << endl;
			return 0;
		}
	}
	return 0;
}
