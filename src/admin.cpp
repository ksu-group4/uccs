
/*
admin.cpp
Declaration file for the class admin.
An Administrator is a user with privileges to access and edit protected information that is restricted to other users.
*/

#include "admin.h"

Admin::Admin()
{
    //Default Constructor
}

void Admin::addAdmin()
{
    char again;

    cout << "Welcome " << name << "! \n";

    do{

        cout << "Enter a new admin? (y/n) \n";
        cin >> again;


        if (again =='y' || again == 'Y')
        {
            cout << "Enter name of admin...\n";
            cin >> ws;
            getline (cin, name);

            admin_names.push(name);
        }

    }while (again =='y' || again =='Y');
}

void Admin::listAdmins()
{
	cout << "There are " << admin_names.size() << " admins currently in this queue." << endl << endl;

	while(!admin_names.empty())
	{
		cout << "\t" << admin_names.front() << endl;
		admin_names.pop();
		cout << endl;
	}
}

