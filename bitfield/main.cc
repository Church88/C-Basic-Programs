#include <sstream>
#include <iostream>
#include <stdexcept>
using namespace std;

//This final homework assignment will teach you:
//Inheritance (polymorphism)
//Bit fields
//Refresher on overloading operators
//Three different ways of doing constants
//A bit of exceptions

//These constants can either be accessed by name "orange" or by "key_colors::orange" for clarity
enum key_colors {
	red 		= 1,
	yellow 		= 2,
	green 		= 4,
	blue 		= 8,
	orange 		= 16,
	ultraviolet = 32,
	brown 		= 64,
	black 		= 128
};

//The player can only have one of this list of bits set between JOB_THIEF and JOB_PSION
//Setting another bit in this range will clear all the other bits in the range set
const int JOB_THIEF  		= 1;
const int JOB_RUNNER 		= 2;
const int JOB_WARLOCK	 	= 4;
const int JOB_CHAPLAN 		= 8;
const int JOB_BERSERKER 	= 16;
const int JOB_GUERILLA 		= 32;
const int JOB_JUDOKA 		= 64;
const int JOB_ARMY 			= 128;
const int JOB_HACKER 		= 256;
const int JOB_MARTYR 		= 512;
const int JOB_CRUSADER 		= 1024;
const int JOB_TKD 			= 262144;
const int JOB_PSION 		= 524288;

const int JOB_ALL 			= 788479; //The sum of all bits above, for easy math

//Any or all of these can be set in addition to the above
const int JOB_ACTIVE 		= 2048;
const int JOB_FULL_HIDE 	= 4096;
const int JOB_TIRED 		= 8192;
const int JOB_BLOODY_KNIFE 	= 16384;
const int JOB_EXTRA1 		= 65536;
const int JOB_EXTRA2 		= 131072;

//This is the C way of doing constants
#define WEAP_HOOK				1
#define WEAP_THE_NAVARRO        2
#define WEAP_MEDIKIT			4
#define WEAP_SPANNER			8
#define WEAP_AXE				16
#define WEAP_SNIPER_RIFLE		32
#define WEAP_AUTO_RIFLE 		64
#define WEAP_SHOTGUN			128
#define WEAP_SUPER_SHOTGUN		256
#define WEAP_NAILGUN			512
#define WEAP_LIGHT_ASSAULT		1024
#define WEAP_GRENADE_LAUNCHER	2048
#define WEAP_FLAMETHROWER		4096
#define WEAP_ROCKET_LAUNCHER	8192
#define WEAP_INCENDIARY 		16384
#define WEAP_ASSAULT_CANNON 	32768
#define WEAP_LIGHTNING			65536
#define WEAP_DAEDALUS			131072
#define WEAP_TRANQ				262144
#define WEAP_RAILGUN			524288
#define WEAP_MAUSER 			1048576
#define WEAP_AIRFIST			2097152
#define WEAP_LASERCANNON		4194304
#define WEAP_SNG				8388608

typedef int64_t int64; //Here's an example of how to do a typedef

class Bitfield {
	protected: //Protected, not private!!
		int64 datafield;
	public:
		Bitfield() : datafield(0) {}

		//YOU: Make this action virtual and see what happens in print_message...
		void foo() { cout << "My datafield is: " << datafield << "\n"; }

		//YOU: Set the passed in flag on datafield
		void operator+=(const int64 flag) {
			datafield = datafield | flag;
		}

		//YOU: This action will clear the passed in flag
		void operator-=(const int64 flag) {
			datafield = datafield &~ flag;
		}

		//YOU: This action will return true if the passed in flag is set
		bool operator==(const int64 flag) {
			return(datafield & flag);
		}
};

class Job_Bitfield : public Bitfield {
	protected:
	public:
		Job_Bitfield() : Bitfield() {}
		void foo() {
			if (datafield)
				cout << "I have a job!\n";
			else
				cout << "I do not have a job.\n";
		}
		void Job_change(const int64 flag){
			if(datafield){
				if(flag == JOB_ALL) {throw runtime_error("Cannot set flag JOB_ALL");}
				datafield = datafield &~ JOB_ALL;
				datafield = datafield | flag;
			}
			if(!datafield)  datafield = datafield | flag;

		}
};


class Weapon_Bitfield : public Bitfield {
	public:
		Weapon_Bitfield() : Bitfield() {}
		int64 select_best_weapon() {
			//YOU: Return the highest bit set
			if (datafield){
				if(datafield >= WEAP_SNG){ cout << "WEAP_SNG" << endl;}
				else if(datafield >= WEAP_LASERCANNON){ cout << "WEAP_LASERCANNON" << endl;}
				else if(datafield >= WEAP_AIRFIST){ cout << "WEAP_AIRFIST" << endl;}
				else if(datafield >= WEAP_MAUSER){ cout << "WEAP_MAUSER" << endl;}
				else if(datafield >= WEAP_RAILGUN){ cout << "WEAP_RAILGUN" << endl;}
				else if(datafield >= WEAP_TRANQ){ cout << "WEAP_TRANQ" << endl;}
				else if(datafield >= WEAP_DAEDALUS){ cout << "WEAP_DAEDALUS" << endl;}
				else if(datafield >= WEAP_LIGHTNING){ cout << "WEAP_LIGHTNING" << endl;}
				else if(datafield >= WEAP_ASSAULT_CANNON){ cout << "WEAP_ASSAULT_CANNON" << endl;}
				else if(datafield & WEAP_INCENDIARY){ cout << "WEAP_INCENDIARY" << endl;}
				else if(datafield >= WEAP_ROCKET_LAUNCHER){ cout << "WEAP_ROCKER_LAUNCHER" << endl;}
				else if(datafield >= WEAP_FLAMETHROWER){ cout << "WEAP_FLAMETHROWER" << endl;}
				else if(datafield >= WEAP_GRENADE_LAUNCHER){ cout << "WEAP_GRENADE_LAUNCHER" << endl;}
				else if(datafield >= WEAP_LIGHT_ASSAULT){ cout << "WEAP_LIGHT_ASSAULT" << endl;}
				else if(datafield >= WEAP_NAILGUN){ cout << "WEAP_NAILGUN" << endl;}
				else if(datafield >= WEAP_SUPER_SHOTGUN){ cout << "WEAP_SUPER_SHOTGUN" << endl;}
				else if(datafield >= WEAP_SHOTGUN){ cout << "WEAP_ASSAULT_CANNON" << endl;}
				else if(datafield >= WEAP_AUTO_RIFLE){ cout << "WEAP_AUTO_RIFLE" << endl;}
				else if(datafield >= WEAP_SNIPER_RIFLE){ cout << "WEAP_SNIPER_RIFLE" << endl;}
				else if(datafield >= WEAP_AXE){ cout << "WEAP_AXE" << endl;}
				else if(datafield >= WEAP_SPANNER){ cout << "WEAP_SPANNER" << endl;}
				else if(datafield >= WEAP_MEDIKIT){ cout << "WEAP_MEDIKIT" << endl;}
				else if(datafield >= WEAP_THE_NAVARRO){ cout << "WEAP_THE_NAVARRO" << endl;}
				else if(datafield >= WEAP_HOOK){ cout << "WEAP_HOOK" << endl;}
			}
			//If we have no weapon at all, throw an exception
			//Don't bother catching it, we'll let it kill the program
			if (!datafield)
				throw runtime_error("Cannot select best weapon when we don't have one!");
		}
		void foo() {
			if(datafield >= WEAP_SNIPER_RIFLE)cout << "I haz ranged weapon.\n";
			else if (datafield) cout << "I haz melee weapon.\n";
			else cout << "I no haz weapon.\n";
		}
};

//What will this print?
void print_message(Bitfield& b) {
	b.foo();
}
int main() {
	Bitfield keys;
	Job_Bitfield jobs;
	Weapon_Bitfield weapons;
	string action,line,input_2;
	int64 input_1;
	while(cin){
		int a = cin.peek();
		if (a == EOF) break;
		getline(cin,line);
		stringstream ss(line);
		ss >> action;
		ss >> input_2;
		if (input_2 == "WEAP_HOOK") input_1 = 1;
		if (input_2 == "WEAP_THE_NAVARRO") input_1 = 2;
		if (input_2 == "WEAP_MEDIKIT") input_1 = 4;
		if (input_2 == "WEAP_SPANNER") input_1 = 8;
		if (input_2 == "WEAP_AXE") input_1 = 16;
		if (input_2 == "WEAP_SNIPER_RIFLE") input_1 = 32;
		if (input_2 == "WEAP_AUTO_RIFLE") input_1 = 64;
		if (input_2 == "WEAP_SHOTGUN") input_1 = 128;
		if (input_2 == "WEAP_SUPER_SHOTGUN") input_1 = 256;
		if (input_2 == "WEAP_NAILGUN") input_1 = 512;
		if (input_2 == "WEAP_LIGHT_ASSAULT") input_1 = 1024;
		if (input_2 == "WEAP_GRENADE_LAUNCHER") input_1 = 2048;
		if (input_2 == "WEAP_FLAMETHROWER") input_1 = 4096;
		if (input_2 == "WEAP_ROCKET_LAUNCHER") input_1 = 8192;
		if (input_2 == "WEAP_INCENDIARY") input_1 = 16384;
		if (input_2 == "WEAP_ASSAULT_CANNON") input_1 = 32768;
		if (input_2 == "WEAP_LIGHTNING") input_1 = 65536;
		if (input_2 == "WEAP_DAEDALUS") input_1 = 131072;
		if (input_2 == "WEAP_TRANQ") input_1 = 262144;
		if (input_2 == "WEAP_RAILGUN") input_1 = 524288;
		if (input_2 == "WEAP_MAUSER") input_1 = 1048576;
		if (input_2 == "WEAP_AIRFIST") input_1 = 2097152;
		if (input_2 == "WEAP_LASERCANNON") input_1 = 4194304;
		if (input_2 == "WEAP_SNG") input_1 = 8388608;
		if (input_2 == "JOB_THIEF") input_1  = 1;
		if (input_2 == "JOB_RUNNER") input_1 = 2;
		if (input_2 == "JOB_WARLOCK") input_1 = 4;
		if (input_2 == "JOB_CHAPLAN") input_1 = 8;
		if (input_2 == "JOB_BERSERKER") input_1 = 16;
		if (input_2 == "JOB_GUERILLA") input_1 = 32;
		if (input_2 == "JOB_JUDOKA") input_1 = 64;
		if (input_2 == "JOB_ARMY") input_1 = 128;
		if (input_2 == "JOB_HACKER") input_1 = 256;
		if (input_2 == "JOB_MARTYR") input_1 = 512;
		if (input_2 == "JOB_CRUSADER") input_1 = 1024;
		if (input_2 == "JOB_TKD") input_1 = 262144;
		if (input_2 == "JOB_PSION") input_1 = 524288;
		if (input_2 == "JOB_ALL") input_1 = 788479;
		if (input_2 == "JOB_ACTIVE") input_1 = 2048;
		if (input_2 == "JOB_FULL_HIDE") input_1 = 4096;
		if (input_2 == "JOB_TIRED") input_1 = 8192;
		if (input_2 == "JOB_BLOODY_KNIFE") input_1 = 16384;
		if (input_2 == "JOB_EXTRA1") input_1 = 65536;
		if (input_2 == "JOB_EXTRA2") input_1 = 131072;
		if (input_2 == "RED") input_1 = 1;
		if (input_2 == "YELLOW") input_1 = 2;
		if (input_2 == "GREEN") input_1 = 4;
		if (input_2 == "BLUE") input_1 = 8;
		if (input_2 == "ORANGE") input_1 = 16;
		if (input_2 == "ULTRAVIOLET") input_1 = 32;
		if (input_2 == "BROWN") input_1 = 64;
		if (input_2 == "BLACK") input_1 = 128;
		if (action == "ADD"){
			if(input_2[0] == 'W') {weapons += (input_1);}
			else if(input_2[0] == 'J') {jobs.Job_change(input_1);}
			else {keys += input_1;}
		}
		else if (action == "DELETE"){
			if(input_2[0] == 'W') {weapons -= input_1;}
			else if(input_2[0] == 'J') {jobs -= input_1;}
			else {keys -= (input_1);}
		}
		else if (action == "QUERY"){
			if(input_2[0] == 'W') {
				if ((weapons == input_1))cout << "TRUE" << endl;
				else cout << "FALSE" << endl;
			}
			else if(input_2[0] == 'J') {
				if ((jobs == input_1)) cout << "TRUE" << endl;
				else cout << "FALSE" << endl;
			}
			else {
				if ((keys == input_1))
					cout << "TRUE" << endl;
				else cout << "FALSE" << endl;
			}
		}
		else if (action == "SELECT"){weapons.select_best_weapon();}
		else throw runtime_error("Invalid Input");
	}
}

/*
//Example code, can delete...
keys.foo();
jobs.foo();
weapons += (WEAP_AXE);
weapons.foo();
print_message(keys);
print_message(jobs);
print_message(weapons);
keys+=(key_colors::red);
keys-=(green);
if (keys == red) cout << "Haz red.\n";
weapons.select_best_weapon();

//YOU: Write a main loop that will allow the user to set, clear, and test to see if certain flags are set
// within the bitfields declared above. You'll need to keep track of three:
//1) keys, which will hold the values from key_colors::red through black. 
//2) jobs, which will hold the const ints for jobs, with special rules (you can only have one job)
//3) weapons, which will allow the user to query what the best weapon he has is.

//SYNTAX:
//"ADD <flagname>" will add the flag to the appropriate bitfield. (Example: "ADD RED" or "ADD WEAP_ROCKET_LAUNCHER" or "ADD JOB_PSION") (JOB_ALL cannot be set by the user)
//"DELETE <flagname>" removes the flag from the appropriate bitfield. (Example: "REMOVE ORANGE" will clear the orange flag from the keys bitfield.
//"QUERY <flagname>" will cout "TRUE" if the flag is set in the appropriate bitfield, or "FALSE" otherwise. (Example: "ADD JOB_PSION", "QUERY JOB_PSION" will print "TRUE" to the screen.)
//"SELECT BEST WEAPON will cout the name of the highest bit set (Example: If the bits for the axe and rocket launcher have been set, it will print to the screen "WEAP_ROCKET_LAUNCHER".)
//On an invalid command (i.e. not one of the four possibilities above), throw a runtime_error with the string "Invalid Input", and let it kill the program
*/
//}
