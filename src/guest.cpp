//Nicholas Terra
//4/8/15
//Declaration file for the class guest.
//guest represents a visitor to the conference.


#include "guest.h"

using namespace std;

void Guest::addGuest()
{
    char again;

    do
    {
	    cout << "Enter name of guest...\n";
        cin >> ws;
		getline (cin, name);

		guestList.push(name);

	    cout << "The guest " << name << "has been added to the guest list! \n"
        cout << "Add a new guest? (y/n) \n";
        cin >> again;

    }while (again =='y' || again =='Y');
}

void Guest::listGuests()
{
    cout << "There are " << guestList.size() << " guests currently in this queue." <<endl;

	while(!guestList.empty())
	{
		cout << "\t" << guestList.front() << endl;
		guestList.pop();
		cout << endl;
	}
}
