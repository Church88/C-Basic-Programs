#include <iostream>
#include <cmath>
using namespace std;
//Read the README file for all the details. Fill in the gaps below.
void check(int &x) {
	if(x > 99) x = 99;
	if(x < 0) x = 0;
}
void check_spot(int &x) {
	if(x > 99) x = 99;
	if(x < 0) x = 0;
}
void max_min(int &max, int &min) {
	if(min > max) max = min;
	if(max < min) min = max;
}
//Write your Spot class here
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
		int distance(){ return sqrt(x*x+y*y); }
};
//Write your Treasure class here
class Treasure {
	private:
		int x_min, x_max, y_min, y_max, value;
	public:
		Treasure(): x_min(0), x_max(0), y_min(0), y_max(0), value(0) {}
 		Treasure(int new_x_min, int new_x_max, int new_y_min, int new_y_max, int new_value):
 			x_min(new_x_min), x_max(new_x_max), y_min(new_y_min), y_max(new_y_max), value(new_value) {
			check(x_min);
			check(y_min);
			check(x_max);
			check(y_max);
			max_min(x_max, x_min);
			max_min(y_max, y_min);
			if(value < 0) value = 0;
 		}
		int get_x_min() { return x_min; }
		int get_y_min() { return y_min; }
		int get_x_max() { return x_max; }
		int get_y_max() { return y_max; }
		int get_value() { return value; }
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
			if(new_value < 0) new_value = 0;
			value = new_value;
		}
		bool within(Spot A){
			if(A.get_x() >= get_x_min() && A.get_x() <= get_x_max() && A.get_y() >= get_y_min() && A.get_y() <= get_x_max())
				return true;
			else return false;
		}
   		int loot() {
			int temp = value;
			set_value(0);
			return temp;
		}
};
#ifndef PROF_MAIN
//Nothing inside these #ifndef and #endif lines will be used in the autograder
//So feel free to use this main function to test your classes as you write them
int main() {
	//Here's some sample code, which you can delete or use or whatever
	cout << "Hello World!!!!!1!\n";
	Spot s(3,-4);
	cout << s.get_x() << " " << s.get_y() << endl; //Should output "3 0"
	s.set_x(50);
	s.set_y(100);
	cout << s.get_x() << " " << s.get_y() << endl; //Should output "50 99"
	Treasure t(1,10,30,40,1000);
	if (t.within(s)) {
		cout << "Error, s is within t.\n";
	}
	Spot s2(5,35);
	if (t.within(s2)) {
		cout << "Correct, s2 is within t.\n";
	}
	cout << "Looting t: " << t.loot() << endl; //Should print 1000
	cout << "Looting t: " << t.loot() << endl; //Should print 0
}
#endif
