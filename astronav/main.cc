//Timothy Lee, Andres Teran
#include <iomanip>
#include <sstream>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

//I have provided the skeleton of an application for you
//You will have to write all the missing parts (marked with "YOU" in the code)

class Sun {
	private:
		//Needs to hold the percentage it is overhead as a member variable
		//Class Invariant: the percentage must always be >=0 and <= 100
		int percentage;
		//Extra credit: Hold the latitude as well as if it is daylight savings
		//YOU

	public:
		//Default constructor. Called any time you make a new object with no parameters
		Sun () {
			//YOU
			percentage = 50;
		}
		//A constructor that takes one parameter
		Sun (int new_percentage) {
			percentage = new_percentage; //Set percentage to new_percentage
		}

		//Accessor/mutators
		//Set our percentage to the value of new_percentage
		void set_percentage(int new_percentage) {
			percentage = new_percentage;
		}
		//Return our current percentage
		int get_percentage() {
			return percentage;
		}

		//The heart of the class -
		//A member function that will return the current time (in military time) as a string
		//By default, dawn is 0600, dusk is 1800, noon is 1200
		string get_time() {
			//YOU
			ostringstream ss;
			int time = ((360+(7.2*percentage))/60)*100; //Time calculated in minutes
			if((time%100)>=60){ //Determine if minute values need to be adjusted
				int min = time%100 - 60; //Proper minute value
				time = (time-time%100) + 100 + min; //Eliminate the incorrect minutes, increment the hour and add the proper minutes
			}
			ss << setfill('0') << setw(4) << time; //Set up the string into proper format
			string Time = ss.str(); //Give it a label
			return Time; //Vomit to screen
		}
};

class Moon {
	private:
		//Just like Sun, except it will also hold what phase it is in.
		int percentage;
		int phase;

	public:
		//These variables can be accessed via Moon::PHASE_FULL or Moon::PHASE_NEW, etc.
		static const int PHASE_NEW = -4;
		static const int PHASE_WAXING_CRESENT = -3;
		static const int PHASE_FIRST_QUARTER = -2;
		static const int PHASE_WAXING_GIBBOUS = -1;
		static const int PHASE_FULL = 0;
		static const int PHASE_WANING_GIBBOUS = 1;
		static const int PHASE_THIRD_QUARTER = 2;
		static const int PHASE_WANING_CRESENT = 3;
		//Extra credit: Add more phases for gibbous waxing/waning and crescent waxing/waning

		//Default constructor. Called any time you make a new object with no parameters
		Moon () {
			//YOU
			phase = PHASE_FULL;
			percentage = 0; 
		}
		Moon (int new_percentage, int new_phase) {
			//YOU
			percentage = new_percentage;
			phase = new_phase;
		}

		//Accessor/mutators
		//Set our percentage to the value of new_percentage
		void set_percentage(int new_percentage) {
			//YOU
			percentage = new_percentage;
		}
		//Return our current percentage
		int get_percentage() {
			//YOU
			return percentage;
		}
		void set_phase(int new_phase) {
			//YOU
			phase = new_phase;
		}
		int get_phase() {
			//YOU
			return phase;
		}

		//The heart of the class -
		//A member function that will return the current time (in military time) as a string
		//By default, dawn is 0600, dusk is 1800, noon is 1200, midnight is 0000
		string get_time() {
		//YOU
		ostringstream ss;
//		if(percentage >= 50){ //Anything at or after midnight
		int time =((((phase*180)+1080)+(7.2*percentage))/60)*100; // Same as sun calculations from 1800hrs to 0600hrs
		time = abs(time);
		if(time>2359){ //Handle wrapping around midnight
			time -= 2400;
		}
		if((time%100)>=60){
			int min = time%100 - 60;
			time = (time-time%100) + 100 + min;
		}
		ss << setfill('0') << setw(4) << time;
		string Time = ss.str();
		return Time;//Vomit
		}

};

int main() {
	//Loop until the user chooses to quit
	while (cin) {
		cout << "Would you like to calculate the time based on the sun or the moon? (Type 'sun' for sun, 'moon' for moon, 'quit' to quit): ";
		string input;
		cin >> input;
		if (!cin) break;

		//Upper case the string
		transform(input.begin(), input.end(),input.begin(), ::toupper);

		if (input == "SUN") {
			//Input position of the sky
			cout << "Input the percentage the sun is across the sky (Type '0' for on the eastern horizon, '100' for on the western horizon, '50' for directly overhead, etc.): ";
			int percentage;
			cin >> percentage;
			if (percentage < 0 || percentage > 100 || !cin) break;

			//Extra credit: add in inputting the latitude and DST

			//Now we output the current time based on position
			Sun my_sun(percentage);
			cout << "Based on your input, the current time is " << my_sun.get_time() << " hours\n";
			while (percentage < 100) {
				percentage += 10;
				if (percentage > 100) percentage = 100;
				my_sun.set_percentage(percentage);
				cout << "Advancing the sun by 10% across the sky. Now the time is: " << my_sun.get_time() << " hours.\n";
			}
		}
		else if (input == "MOON") {
			//Input position of the moon
			cout << "Input the percentage the moon is across the sky (Type '0' for on the eastern horizon, '100' for on the western horizon, '50' for directly overhead, etc.): ";
			int percentage;
			cin >> percentage;
			if (percentage < 0 || percentage > 100 || !cin) break;

			//Input phase of the moon
			cout << "Input the phase of the moon (Type 'Full', 'New', 'Waxing_Cresent', 'Waning_Cresent', 'Waxing_Gibbous', 'Waning_Gibous', 'First_Quarter', 'Third_Quarter'): ";
			string str;
			cin >> str;
			if (!cin) break;
			transform(str.begin(), str.end(),str.begin(), ::toupper);
			int phase;
			if (str == "FULL") phase = Moon::PHASE_FULL;
			else if (str == "NEW") phase = Moon::PHASE_NEW;
			else if (str == "WAXING_CRESENT") phase = Moon::PHASE_WAXING_CRESENT;
			else if (str == "WANING_CRESENT") phase = Moon::PHASE_WANING_CRESENT;
			else if (str == "WAXING_GIBBOUS") phase = Moon::PHASE_WAXING_GIBBOUS;
			else if (str == "WANING_GIBBOUS") phase = Moon::PHASE_WANING_GIBBOUS;
			else if (str == "FIRST_QUARTER") phase = Moon::PHASE_FIRST_QUARTER;
			else if (str == "THIRD_QUARTER") phase = Moon::PHASE_THIRD_QUARTER;
			else {
				cout << "Invalid Phase!\n";
				continue;
			}

			//Now we output the current time based on position
			Moon my_moon(percentage, phase);
			cout << "Based on your input, the current time is " << my_moon.get_time() << " hours\n";
			while (percentage < 100) {
				percentage += 10;
				if (percentage > 100) percentage = 100;
				my_moon.set_percentage(percentage);
				cout << "Advancing the moon by 10% across the sky. Now the time is: " << my_moon.get_time() << " hours.\n";
			}
		}
		else if (input == "QUIT") {
			break;
		}
		else { //Input is not sun or moon or quit
			cout << "Bad input.\n";
		}
	}
	cout << "Thank you for using the Astronav 2000!\n";
}
