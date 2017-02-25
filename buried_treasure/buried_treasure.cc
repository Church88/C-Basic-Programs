#include <array>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

/*const int SIZE = 100;
const char TRES = '$';
const char SPOT = '0';
const char EMPTY = '.';
const char REFRESH = 100000;

void print_board(char board[][SIZE]){
	for (int i = 0; i < SIZE+2; i++)
		cout << i; cout << endl;
	for (int i = 0; i < SIZE; i ++){
		cout << i;
		for (int j + 0; j < SIZE; j ++)
			cout << board[i][j];
		}
		cout << i << endl;
	}
	for (int i = 0; i < SIZE+2; i ++)
		cout << i; cout << endl;
}

void waiter(string error = " "){
	cout << eror << "Press any key to coninue.\n";
	string nothing;
	cin >> nothing;
}
*/
void die() {
	cout << -1 << endl;
	exit (EXIT_FAILURE);
}
void check(int &x) {
	if(x > 100){
		x = 100;
		die();
	}
	if(x < 0){
		x = 0;
		die();
	}
}
void max_min(int &max, int &min) {
	if(min > max){
		max = min;
		die();
	}
	if(max < min){
		min = max;
		die();
	}
}
class Spot {
	private:
		int x, y;
	public:
		Spot(): x(0),y(0) {}
		Spot(int new_x, int new_y): x(new_x), y(new_y) {
			check(x);
			check(y);
		}
		int get_x(){ return x; }
		int get_y(){ return y; }
		void set_x(int new_x){
			x = new_x;
			check(x);
		}
		void set_y(int new_y){
			y = new_y;
			check(y);
		}
		float distance(){
			return sqrt(pow(get_x(),2)+pow(get_y(),2));
		}
};
class Treasure{
	private:
		int x_min, x_max, y_min, y_max, value;
	public:
	Treasure(): x_min(0), x_max(0), y_min(0), y_max(0), value(0){}
	Treasure(int new_x_min, int new_x_max, int new_y_min, int new_y_max, int new_value):
		x_min(new_x_min), x_max(new_x_max), y_min(new_y_min), y_max(new_y_max), value(new_value){
		check(x_min);
		check(y_min);
		check(x_max);
		check(y_max);
		if(value < 0) value = 0;
	}
	int get_x_min(){return x_min;}
	int get_y_min(){return y_min;}
	int get_x_max(){return x_max;}
	int get_y_max(){return y_max;}
	int get_value(){return value;}
	void set_x_min(int new_x_min){
		x_min = new_x_min;
		check(x_min);
		max_min(x_max, x_min);
	}
	void set_y_min(int new_y_min){
		y_min = new_y_min;
		check(y_min);
		max_min(y_max, y_min);
	}
	void set_x_max(int new_x_max){
		x_max = new_x_max;
		check(x_max);
		max_min(x_max, x_min);
	}
	void set_y_max(int new_y_max){
		y_max = new_y_max;
		check(y_max);
		max_min(y_max, y_min);
	}
	void set_value(int new_value){
		value = new_value;
		if(value < 0) value = 0;
	}
	bool within(Spot A){
		if(A.get_x() >= get_x_min() && A.get_x() <= get_x_max() && A.get_y() >= get_y_min() && A.get_y() <= get_x_max())
		return true;
		else return false;
	}
	int loot(){
		int temp = value;
		set_value(0);
		return temp;
	}
};

void forgot(Treasure &IDK){
	IDK.set_x_max(IDK.get_x_min()+(IDK.get_x_max()-1));
	IDK.set_y_max(IDK.get_y_min()+(IDK.get_y_max()-1));
}

//void clear_board(char board [][SIZE]){
//	for(int i = 0; i < SIZE; i ++){
//		for(int j = 0; j < SIZE; j++)
//			board[i][j] = EMPTY;
//		}
//	}
//}

int main() {
//	char board[SIZE][SIZE] = {};
	int M;
	int move_x, move_y;
	int N;
	int xmin, xmax, ymin, ymax, val;
	int total_loot = 0;
//	cout << "Input number of buried treasures\n";
	cin >> N;
	if(N < 0) die();
	if(!cin) die();
	vector<Treasure> treas_vec;
	for(int i = 0; i < N; i ++){
		cin >> xmin >> xmax >> ymin >> ymax >> val;
		Treasure temp(xmin,xmax,ymin,ymax,val);
//		cout << temp.get_x_max() << " " << temp.get_y_max() << endl;
//		cout << temp.get_x_min() << " " << temp.get_y_min() << endl;
//		cout << temp.get_value() << endl;
		forgot(temp);
//		cout << temp.get_x_max() << " " << temp.get_y_max() << endl;
		treas_vec.push_back(temp);
	}
//	cout << "Input the number of steps\n";
	cin >> M;
	if(M < 0) die();
	if(!cin) die();
	vector<Spot> spot_vec;
	cin >> move_x >> move_y;
	if(!cin) die();
	Spot temp(move_x,move_y);
//	cout << temp.get_x() << endl;
	spot_vec.push_back(temp);
//	cout << spot_vec.at(0).get_x() << endl;
	for(int i = 0; i < M-1; i++){
		cin >> move_x >> move_y;
		if(!cin) die();
		Spot temp(move_x,move_y);
//		cout << spot_vec.at(i).get_x() << endl;
//		cout << temp.distance() << " " << spot_vec.at(i).distance() << " " << abs(spot_vec.at(i).distance()-temp.distance()) << endl;
		if(abs(spot_vec.at(i).distance()-temp.distance()) > 1.5) die();
		else spot_vec.push_back(temp);
	}
	for(Spot &s : spot_vec){//loot all spots that hit treasures
		for(Treasure &t : treas_vec){
			if(t.within(s)) total_loot+=t.loot();
		}
	}
	cout << total_loot << endl;
//	system("clear")
//	clear_board(board);
//	for(Spot &s : spot_vec){
//		board[s.get_x][s.get_y] = SPOT;
//	}
//	for(Treasure &t : treas_vec){
//		for(int i = t.get_x_min; i <= t.get_x_max; i ++){
//			for(int j = t.get_y_min; j <= t.get_y_max; j ++){
	return 0;
}
