#include <iostream>
#include <cctype>
using namespace std;

int main () {
	while (true){
	cout << "Please enter a sentence: ";
		string input;
		getline(cin,input);
		for (char &ch : input)
			ch = toupper(ch);
		int hard=0;
		if (input=="QUIT") break;
		if (!cin) break;
		if (input.find("MAY")!=-1)
			hard -=1;
		if (input.find("PLEASE")!=-1)
			hard -=1;
		if (input.find("THANK YOU")!=-1)
			hard -=1;
		if (input.find("POR FAVOR")!=-1)
			hard -=1;
		if (input.find("EXCUSE ME")!=-1)
			hard -=1;
		if (input.find("EXCUSE MOI")!=-1)
			hard -=1;
		if (input.find("...")!=-1)
			hard -=1;
		if (input.find("CAN")!=-1)
			hard -=1;
		if (input.find("WOULD")!=-1)
			hard -=1;
		if (input.find("COULD")!=-1)
			hard -=1;
		if (input.find("UH")!=-1)
			hard -=1;
		if (input.find("?")!=-1)
			hard -=1;
		if (input.find("EXCUSE ME")!=-1)
			hard -=1;
		if (input.find("NOW")!=-1)
			hard +=1;
		if (input.find("IMMEDIATELY")!=-1)
			hard +=1;
		if (input.find("THIS INSTANT")!=-1)
			hard +=1;
		if (input.find("!")!=-1)
			hard +=1;
		if (input.find("MUST")!=-1)
			hard +=1;
		if (input.find("DEMAND")!=-1)
			hard +=1;
		if(hard>10)
			hard=10;
		if(hard<-10)
			hard=-10;
	cout << hard << endl;
}
return 0;
}

