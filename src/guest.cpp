//Nicholas Terra
//4/8/15
//Declaration file for the class guest.
//guest represents a visitor to the conference.

#include <iostream>
#include <string>
#include <queue>
#include "guest.h"

using namespace std;

int main()  
{

again ='y';

while(again == 'y' || again == 'Y')
	{
	  cout << "Enter name of guest...\n";
	    cin >> ws;
		getline (cin, name);

		q.push(name);

	  cout << "Welcome " << name << "! \n"
	       << "Enter a new guest? (y/n) \n";
			   cin >> again;
	}	

	cout << endl;

	cout << "There are " << q.size() << " guests currently in this queue." << endl << endl;

	while(!q.empty())
	{
		cout << "\t" << q.front() << endl;
		q.pop();
		cout << endl;
	}   

system ("pause");
return 0;
}
