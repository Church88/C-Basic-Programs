//Jennifer Elkins
//Timothy Lee
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define TABLE_SIZE 10
#define TABLE_CHAR '#'
#define OPEN_CHAR '.'
#define BALL_CHAR '@'
#define POCKET_CHAR '0'

void wait_sec(float x) {
	clock_t start = clock();
	while (float(clock() - start)/CLOCKS_PER_SEC < x)
		; //Do nothing
}

class vec3 {
	public:
	int x,y,z;
	vec3() { x = 0; y = 0; z = 0; }
	vec3(int new_x, int new_y, int new_z):x(new_x),y(new_y),z(new_z) {}
	void operator += (vec3& rhs) {
		x += rhs.x;
		y += rhs.y;
		z += rhs.z;
	}
	
	void operator -= (vec3& rhs){
		x -= rhs.x;
		y -= rhs.y;
		z -= rhs.z;
	}
	
	void operator *= (vec3& rhs){
		x *= rhs.x;
		y *= rhs.y;
		z *= rhs.z;
	}
	
	
	void operator + (vec3& rhs){
		x + rhs.x;
		y + rhs.y;
		z + rhs.z;
		
	}
	
	void operator - (vec3& rhs){
		x - rhs.x;
		y - rhs.y;
		z - rhs.z;
	}
	
	//YOU: Write more vector operators. operator-, operator-=, etc.

	//YOU: Write a operator* that takes an integer, and scales the vector by that int
};

class Ball {
	int ball_no;
	float weight;
	vec3 position;
	vec3 velocity;
	vec3 temp;
	bool in_pocket;
	public:
	Ball() {
		ball_no = 0;
		weight = 0;
		//Not needed, but we could - position = {0,0,0};
		//Not needed, but we could - velocity = {0,0,0};
		in_pocket = false;
	}
	Ball (int new_ball_no, float new_weight, vec3 new_pos, vec3 new_vel) : ball_no(new_ball_no) {
		weight = new_weight;
		position = new_pos;
		velocity = new_vel;
		in_pocket = false;
	}

	//YOU: Modify this to check for collisions with other balls (Extra Credit)
	//YOU: Modify this to go into a pocket at the table corners
	//YOU: Fix it so it bounces more properly
	void update() {
		position += velocity;
		if (position.x >= TABLE_SIZE) { position.x = TABLE_SIZE-1; temp.x = velocity.x; velocity.x = 0; velocity.x = temp.x; velocity.x *= -1; }
		if (position.y >= TABLE_SIZE) { position.y = TABLE_SIZE-1; temp.y = velocity.y; velocity.y = 0; velocity.y = temp.y; velocity.y *=-1;}
		if (position.z >= TABLE_SIZE) { position.z = TABLE_SIZE-1; temp.z = velocity.z; velocity.z = 0; velocity.z = temp.z; velocity.z *= -1;}
		if (position.x <= -1 * TABLE_SIZE) { position.x = -1*TABLE_SIZE+1; temp.x = velocity.x; velocity.x = 0; velocity.x = temp.x; velocity.x *= -1;}
		if (position.y <= -1 * TABLE_SIZE) { position.y = -1*TABLE_SIZE+1; temp.y = velocity.y; velocity.y = 0; velocity.y = temp.y; velocity.y *= -1;}
		if (position.z <= -1 * TABLE_SIZE) { position.z = -1*TABLE_SIZE+1; temp.z = velocity.z; velocity.z = 0; velocity.z = temp.z; velocity.z *= -1;}
	}
	friend ostream& operator<<(ostream& outs, const Ball& rhs);
	friend void print_table(const Ball& rhs);
};

ostream& operator<<(ostream& outs, const Ball& rhs) {
	cout << "Ball " << rhs.ball_no << " is at: " << rhs.position.x << "," << rhs.position.y << "," << rhs.position.z << endl;
}

//YOU: Modify this to take multiple balls, like maybe in an array or something
//YOU: Print the balls based on their number, instead
void print_table(const Ball &rhs) {
	for (int i = -1 * TABLE_SIZE; i <= TABLE_SIZE; i++) {
		for (int j = -1 * TABLE_SIZE; j <= TABLE_SIZE; j++) {
			if (i == 0 && j == TABLE_SIZE)
				cout << POCKET_CHAR;
			else if (i == 0 && j == -TABLE_SIZE)
			 	cout << POCKET_CHAR;
			else if (i == -TABLE_SIZE && j == -TABLE_SIZE)
			 	cout << POCKET_CHAR;
			else if (i == -TABLE_SIZE && j == TABLE_SIZE)
			 	cout << POCKET_CHAR;
			else if (i == TABLE_SIZE && j == -TABLE_SIZE)
				cout << POCKET_CHAR;
			else if (i == TABLE_SIZE && j == TABLE_SIZE)
				cout << POCKET_CHAR;
			else if (i == -1 * TABLE_SIZE || i == TABLE_SIZE || j == -1 * TABLE_SIZE || j == TABLE_SIZE)
				cout << TABLE_CHAR;
			//YOU: Fix the bug here
			else if (rhs.position.x == i && rhs.position.y == j)
				cout << BALL_CHAR;
			else
				cout << OPEN_CHAR;
		}
		cout << endl;
	}
}

int main() {
	//YOU: Modify this to accept multiple balls
	cout << "Please tell me where to drop your ball (x y z): ";
	int xp,yp,zp;
	//YOU: Modify this to check for valid input after each variable
	//You know, like: if (!cin) exit(EXIT_FAILURE);
	cin >> xp >> yp >> zp;
	//Would this work? vec3 position = {xp,yp,zp};
	vec3 position(xp,yp,zp);
	cout << "Please tell me how fast your ball is moving (x y z): ";
	int xv,yv,zv;
	cin >> xv >> yv >> zv;
	vec3 velocity(xv,yv,zv);
	cout << "Please tell me how heavy your ball is: ";
	int weight;
	cin >> weight;
	cout << "Please tell me what number your ball is: ";
	int number;
	cin >> number;
	Ball my_ball(number,weight,position,velocity);

	cout << my_ball;
	cout << "Beginning simulation...\n";

	const int MAX_TICKS = 10000;
	for (int i = 0; i < MAX_TICKS; i++) {
		system("clear");
		my_ball.update();
		cout << my_ball;
		print_table(my_ball);
		cout << "Tick: " << i << endl;
		wait_sec(.2);
	}
}

