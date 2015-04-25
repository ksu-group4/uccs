/*
  tech.cpp
  Declaration file for the class tech.
*/

#include "tech.h"

Tech::Tech()
{
    //Default Constructor
}

void Tech::addTech()
{
    char again;

    cout << "Welcome " << name << "! \n";

    do{

        cout << "Enter a new technician? (y/n) \n";
        cin >> again;


        if (again =='y' || again == 'Y')
        {
            cout << "Enter the name of technician...\n";
            cin >> ws;
            getline (cin, name);
            tech_names.push(name);

			cout << "Enter room...\n";
			cin >> ws;
			getline (cin,room);
			room_num.push(room);
        }

    }while (again =='y' || again =='Y');
}

void Tech::listTechs()
{
	cout << "There are " << tech_names.size() << " techs currently in this queue." << endl << endl;

	while(!tech_names.empty())
	{
		cout << "\t" << tech_names.front() << endl;
		cout << "\t" << room_num.front() << endl;
		tech_names.pop();
		room_num.pop();
		cout << endl;
	}
}

