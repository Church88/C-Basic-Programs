//Lee, Elkins
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

#define TABLE_CHAR '#'
#define OPEN_CHAR '.'
#define BALL_CHAR '@'//Not currently in use
#define POCKET_CHAR '0'
const int TABLE_SIZE = 22; //Border of table are pockets and walls inside dimensions are 10X10
const float REFRESH = .05; //Modified refresh rate
float VL_DV = 150; //Velocity divisor, to trim down velocity in order to properly display and iterate accross the array
const int BALLS_ALLOWED = 15;//Standard number of balls on a pool table, can be modified

void wait_sec(float REFRESH) {
	clock_t start = clock();
	while (float(clock() - start)/CLOCKS_PER_SEC < REFRESH); //Waits number of seconds based on REFRESH
}

class vec3 {//Deleted z variable
	public:
		int x,y;
		vec3() { x = 0; y = 0; }//Default initializer
		vec3(int new_x,int new_y) {
			x = new_x;
			y = new_y;
		}
		void operator += (vec3& rhs) {//Anything that uses the vec3 values to change the vec3 value does not need a temp
			x += rhs.x;
			y += rhs.y;
		}
		void operator -= (vec3& rhs) {
			x -= rhs.x;
			y -= rhs.y;
		}
		vec3 operator - (vec3& rhs) {//Must derclare temps in order to modify the vec3 and return a vec3
			vec3 temp;
			temp.x = x - rhs.x;
			temp.y = y - rhs.y;
			return temp;
		}
		vec3 operator + (vec3& rhs) {
			vec3 temp;
			temp.x = x + rhs.x;
			temp.y = y + rhs.y;
			return temp;
		}
		vec3 operator / (vec3& rhs) {
			vec3 temp;
			temp.x = x / rhs.x;
			temp.y = y / rhs.y;
			return temp;
		}
//		void operator = (vec3& rhs) {
//			x = rhs.x;
//			y = rhs.y;
//		}
};

class Ball {//Implemented tbl_ variables to translate user input from Cartesian to array corrdinates NOT IMPLEMENTED YET
	public:
		char ball_no;
		float mass;
		vec3 position;
		vec3 velocity;
		bool in_pocket;
		Ball() {
			ball_no = '@';
			mass = 0;
			in_pocket = false;
		}
		Ball (int new_ball_no, float new_mass, vec3 new_pos, vec3 new_vel) {
			ball_no = new_ball_no;
		    mass = new_mass;
			position = new_pos;
			velocity = new_vel;
			in_pocket = false;
		}
		//YOU: Modify this to check for collisions with other balls (Extra Credit)
		//YOU: Modify this to go into a pocket at the table corners
		//YOU: Fix it so it bounces more properly

   //Its clunnky and hackish, temp variables everywhere
		void update(char TABLE[][TABLE_SIZE]) { //Physics operators, position updater
			//Pull a ball out of the vector make copies of all variables, modify said variables and stick them back into the ball and back into vector
			vec3 VEL_FACTOR (VL_DV,VL_DV);
			velocity/VEL_FACTOR;
			position += velocity;
			if(TABLE[position.x][position.y]==TABLE_CHAR){
				if (position.x >= TABLE_SIZE-1) { position.x = TABLE_SIZE-2; velocity.x *= -1; }
				if (position.y >= TABLE_SIZE-1) { position.y = TABLE_SIZE-2; velocity.y *= -1; }
				if (position.x <= 0) { position.x = 1; velocity.x *= -1; }
				if (position.y <= 0) { position.y = 1; velocity.y *= -1; }
			}
			if(TABLE[position.x][position.y]==POCKET_CHAR){
				if (TABLE[position.x+1][position.y] == POCKET_CHAR) { in_pocket = true; position.x += 1; }//ISSUE! pocket check needs to check if the next position is going to be a pocket, not just adjecent to a pocket
				if (TABLE[position.x-1][position.y] == POCKET_CHAR) { in_pocket = true; position.x -= 1; }//Method 1 allow balls to move into pocket space and use walls as limiting factor not table size
				if (TABLE[position.x][position.y-1] == POCKET_CHAR) { in_pocket = true; position.y -= 1; }
				if (TABLE[position.x][position.y+1] == POCKET_CHAR) { in_pocket = true; position.y += 1; }
				if (TABLE[position.x+1][position.y+1] == POCKET_CHAR) { in_pocket = true; position.x += 1; position.y += 1; }
				if (TABLE[position.x-1][position.y-1] == POCKET_CHAR) { in_pocket = true; position.x -= 1; position.y -= 1; }
			}
		}
		vec3 get_velocity(){
			return velocity;
		}
		vec3 get_position(){
			return position;
		}
		int get_pos_x(){
			return position.x;
		}
		int get_vel_x(){
			return velocity.x;
		}
		int get_vel_y(){
			return velocity.y;
		}
		int get_pos_y(){
			return position.y;
		}
		char get_ball_no(){
			return ball_no;
		}
		friend ostream& operator<<(ostream& outs, const Ball& rhs);
		friend void print_table(const Ball& rhs);
};

ostream& operator<<(ostream& outs, const Ball& rhs) {
	outs << "Ball " << rhs.ball_no << " is at: " << rhs.position.x << "," << rhs.position.y << endl;
	return outs;
}

//YOU: Modify this to take multiple balls, like maybe in an array or something
//YOU: Print the balls based on their number, instead
void set_table(char  TABLE[][TABLE_SIZE]){//Print the table as 2D array
	for (int i = 0; i < TABLE_SIZE; i++) {
		for (int j = 0; j < TABLE_SIZE; j++) {
			if (i == 0 && j == 0)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == TABLE_SIZE-1 && j == 0)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == 0 && j == TABLE_SIZE-1)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == TABLE_SIZE-1 && j == TABLE_SIZE-1)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == (TABLE_SIZE/2)-1 && j == 0)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == (TABLE_SIZE/2)-1 && j == TABLE_SIZE-1)
				TABLE[i][j] = POCKET_CHAR;
			else if (i == 0 || i == TABLE_SIZE-1 || j == 0 || j == TABLE_SIZE-1)
				TABLE[i][j] = TABLE_CHAR;
			else
				TABLE[i][j] = OPEN_CHAR;
		}
    }
}
void print_table(char TABLE[][TABLE_SIZE]){
	for (int i = 0; i < TABLE_SIZE; i++) {
		for (int j = 0; j < TABLE_SIZE; j++) {
			cout << TABLE[i][j];
		}
		cout << endl;
	}
}

int main() {
	vector<Ball> MY_BALLS;
	Ball temp;
	char TABLE[TABLE_SIZE][TABLE_SIZE];
	set_table(TABLE);
	int BALLS = 1;
	int xp,yp;
	int xv,yv;
	vec3 position;
	vec3 velocity;
	char number;
	float mass;
	while(true) {
		if (BALLS > BALLS_ALLOWED) { cout << "You have filled in all available balls\n"; break; }
		while(true) {
			xp = 0;
			yp = 0;
			cout << "Please tell me where to drop your ball (x y): ";
			cin >> xp >> yp;
			if (!cin) { cout << "Invalid input\n"; return 0; }
			if (xp > TABLE_SIZE-2 || xp < 1) { cout << "Invalid position, try again\n"; continue; }
			if (yp > TABLE_SIZE-2 || yp < 1) { cout << "Invalid position, try again\n"; continue; }
			else {
				vec3 temp(xp,yp);
				position = temp;
				break;
			}
		}
		while(true) {
			xv = 0;
			yv = 0;
			cout << "Please tell me how fast your ball is moving between 0 and 2 in any direction (x y): ";
			cin >> xv >> yv;
			if (xv > 2 || xv < -2){ cout << "Invalid input try again\n"; continue; }
			if (yv > 2 || yv < -2){ cout << "Invalid input try again\n"; continue; }
			else {
				vec3 temp(xv,yv);
				velocity = temp;
				break;
			}
		}
		while(true) {
			mass = 0;
			cout << "Please tell me how heavy your ball is: ";
			cin >> mass;
			if (!cin) { cout << "Invalid input, mass must be postitive\n"; continue; }
			else break;
		}
		while(true) {
			char ball_name = ' ';
			cout << "Please tell me what letter you would like to label your ball: ";
			cin >> ball_name;
			if (!isalpha(ball_name)){ cout << "Try again\n"; continue; }
			else {
				char temp = ball_name;
				number = temp;
				Ball temp_ball(number,mass,position,velocity);
				MY_BALLS.push_back(temp_ball);
				cout << temp_ball;
				break;
			}
		}
		char input;
		while(true) {
			cout << "To enter another ball, press Y, press N to continue\n";
			cin >> input;
			if (!cin) { cout << "Try again\n"; continue; }
			else break;
		}
		if (input == 'Y' || input == 'y'){
			BALLS ++;
			continue;
		}
		if (input == 'N' || input == 'n') break;
	}
	const int MAX_TICKS = 10000000;
	for (int i = 0; i < MAX_TICKS; i++) {
		system("clear");
		//	Place the balls on the array, aka Ball Handler
		for (int i = 0; i < BALLS; i ++){
			int y = MY_BALLS[i].get_pos_x();
			int x = MY_BALLS[i].get_pos_y();
			char ball = MY_BALLS[i].get_ball_no();
			TABLE[y][x] = ball;
		}
		print_table(TABLE);
		//Print out each Ball
		for (int i = 0; i < BALLS; i ++) {
			Ball temp = MY_BALLS[i];
			cout << temp;
		}
		cout << "Tick: " << i << endl;
		//Move the balls around
		for (int i = 0; i < BALLS; i ++){
			MY_BALLS[i].update(TABLE);
			if(MY_BALLS[i].in_pocket==true)
				MY_BALLS.erase(MY_BALLS.begin()+i);
		}
		wait_sec(REFRESH);
		set_table(TABLE);
	}
}





