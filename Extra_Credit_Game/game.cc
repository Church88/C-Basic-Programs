#include <iostream>
#include <cstring>
using namespace std;
void current_pos (int x_pos, int y_pos, int& fuel_remaining){
	cout << "Current position is (" << x_pos << "," << y_pos << ")" << endl;
	fuel_remaining -=1;
	cout << "Remaining jumps: " << fuel_remaining << endl;
}
int main () {
	int tries_remaining = 2;
	while (true){
		if (tries_remaining == -1){
			cout << "Put out the keyboard fire and try again\n";
			return 0;
		}
		string intro_input = " ";
		cout << "Shall we play a game?\n";
		getline(cin,intro_input);
		for (char &ch : intro_input)
			ch = toupper(ch);
		if (intro_input=="Y"){
			cout << "Welcome to the Star Citizen Treasure Hunt!\n";
			break;
		}
		if (intro_input=="N"){
			cout << "I'm sorry you must have thought this was choice...Welcome to the hunt!\n";
			break;
		}
		else
			tries_remaining --;
		cout << "Invalid input, attempts remaining = " << tries_remaining << endl;
	}
	cout << endl << "Greetings Commander, you will be dropped into the Sol System momentarily. The jump point is directly in the middle of four quadrants Gamma, Iota, Kappa and Epsilon. Gamme is to the north east, Iota is to the " << endl
		<< "north west, Kappa is in the south west and Epsilon is south east. There are reports of an ancient alien treasure somewhere in the region. Your ship will be capable of making series of jumps from one grid point to the next. " << endl
		<< "Current navigaiton systems are only able compute jumps north east south or west and not capable of diagonal jump coordinates. You will be able to jump 10 times before you must jump out of the system to refuel." << endl << endl;
	cout << "Press 'Y' to continue" << endl;
	while (true){
		string user_advance = " ";
		getline(cin,user_advance);
		for (char &ch :user_advance)
			ch = toupper(ch);
		if (user_advance=="Y")break;
		else
			cout << '\a' << "Try again\n";
	}
	cout << "Initializing jump drive. . . .";
	while (true){
		cout << "Welcome to Sol System Commander. Navigation is controlled by inputting the direction 'N' for north, 'E' for east, 'S' for south and 'W' for west.\n";
		cout << "Press 'Y' to activate navigational systems" << endl;
		string user_advance = " ";
		getline(cin,user_advance);
		for (char &ch :user_advance)
			ch = toupper(ch);
		if (user_advance=="Y")break;
		else
			cout << '\a' << "WARNING INCORRECT INPUT DETECTED BE MINDFUL, AS YOUR SHIP'S SYSTEMS ARE SENSITIVE AND UNFORGIVING\n";
	}
	int x_pos = 0;
	int y_pos = 0;
	int fuel_remaining = 10;
	while (true){
		if (fuel_remaining==10 && x_pos==0 && y_pos==0){
			cout << "Navigation systems are online you are clear to begin your search, current position is Sol Jump Point at (" << x_pos << "," << y_pos << ")" << endl;
			cout << "If at any time you feel the need to punch out press 'q' \n";
		}
		cout << "Enter direction: ";
		string player_input = " ";
		getline(cin,player_input);
		for (char &ch : player_input)
			ch = toupper(ch);
		if (player_input=="Q"){
			cout << "Farewell Commander" << endl;
			break;
		}
		if (player_input=="N"){
			y_pos +=1;
			current_pos(x_pos,y_pos,fuel_remaining);
		}
		if (player_input=="E"){
			x_pos +=1;
			current_pos(x_pos,y_pos,fuel_remaining);
		}
		if (player_input=="S"){
			y_pos +=-1;
			current_pos(x_pos,y_pos,fuel_remaining);
		}
		if (player_input=="W"){
			x_pos +=-1;
			current_pos(x_pos,y_pos,fuel_remaining);
		}
		if (x_pos==-3 && y_pos==-5){
			cout << "Congratulations Commander you discovered the ancient alien treasure. This discovery will usher in a new age of medical, warfare and exploration technology. Your location has been marked and a recovery team" << endl
				<< " will take over shortly. Reurn to base to receive further orders. Command out." << endl << endl << "Initializing jump drive. . .\n"; break;
		}
		if (x_pos>0 && y_pos==0)
			cout << "You are on the border of Gamma and Epsilon quadrants" << endl;
		if (x_pos<0 && y_pos==0)
			cout << "You are on the border of Iota and Kappa quadrants" << endl;
		if (y_pos<0 && x_pos==0)
			cout << "You are on the border of Kappa and Epsilon quadrants" << endl;
		if (y_pos>0 && x_pos==0)
			cout << "You are on the border of Iota and Gamma quadrants" << endl;
		if (y_pos==1 && x_pos>0 || y_pos>0 && x_pos==1)//Gamma points of interest
			cout << "Welcome to Gamma quadrant Commander. You will never find a more wretched hive of scum and villainy" << endl;
		if (x_pos==2 && y_pos==3)
			cout << "Here you find an inviting colony located on a small moon. The main attraction for the locals is the cantina. After sampling a few of the local brews you decide " << endl
				<< "that not only is the treasure not here but no one here likes you" << endl;
		if (x_pos==2 && y_pos==4)
			cout << "Just north of the cantina you find a buslting space port. After spending some time adding decals and spoilers to your standard issue ship you pocket your remaining credits and head out" << endl;
		if (x_pos==3 && y_pos==4)
			cout << "Navigation systems are not reading your correct position. You are somewhere outside of the designated jump point. Luckily there appears to be a small moon to the south that shows signs of activity" << endl;
		if (x_pos==3 && y_pos==3)
			cout << "Commander that is no moon. It is giving off a massive elctromagnetic signurature. It is a space station. After some brief torture you were able to maintain the integrity of you mission and you are sent on your way"
				<< endl;
		if (y_pos==1 && x_pos<0 || y_pos>0 && x_pos==-1)//Iota points of interest
			cout << "Welcome to Iota quadrant Commander. Here lies a vast space of asteriods and debris left over from the Great Wars" << endl;
		if (y_pos==-1 && x_pos>0 || y_pos<0 && x_pos==1)//Epsilong points of interest
			cout << "Welcome to Epsilon quadrant Commander. Civilization thrives here, many of the core worlds orbit the nearby suns and order and peace are heavily enforeced by the ConFed Fleet" << endl;
		if (y_pos==-1 && x_pos<0 || y_pos<0 && x_pos==-1)//Kappa points of interest
			cout << "Welcome to Kappa quadrant Commander. Pirate jump points, alien raiders and mercenary bases abound in this region. Caution is advised" << endl;
		if (fuel_remaining==0)
			cout << "Commander you have run out of fuel if you wish to return to the Sol System Jump Point press 'Y', or if you wish to give up the hunt press 'N'" << endl;
		while (fuel_remaining==0){
			string restart_query = " ";
			getline(cin,restart_query);
			for (char &ch : restart_query)
				ch = toupper(ch);
			if (restart_query=="Y"){
				fuel_remaining+=10;
				x_pos = 0;
				y_pos = 0;
				break;
			}
			if (restart_query=="N"){
				cout << "Farewell Commander" << endl;
				return 0;
			}
			else
				cout << "Invalid input please try again" << endl;
		}
		if (player_input!="E" && player_input!="S" && player_input!="N" && player_input!="W")
			cout << "Navigational computer was unable to read your input, please try again Commander.\n";
	}
	return 0;
}



