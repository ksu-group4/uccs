
/*
admin.cpp
Declaration file for the class admin.
An Administrator is a user with privileges to access and edit protected information that is restricted to other users.
*/

#include <iostream>
#include <string>
#include <queue>
#include "admin.h"

using namespace std;

int main()  
{

again ='y';

while(again == 'y' || again == 'Y')
	{
	  cout << "Enter name of admin...\n";
	    cin >> ws;
		getline (cin, name);

		q.push(name);

	  cout << "Welcome " << name << "! \n"
	       << "Enter a new admin? (y/n) \n";
			   cin >> again;
	}	

	cout << endl;

	cout << "There are " << q.size() << " admins currently in this queue." << endl << endl;

	while(!q.empty())
	{
		cout << "\t" << q.front() << endl;
		q.pop();
		cout << endl;
	}   

system ("pause");
return 0;
}
