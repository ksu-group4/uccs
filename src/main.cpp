#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cstdlib>

#include "conference.h"
#include "schedule.h"

using namespace std;

//void handle_command(std::string line);
//void handle_command(std::string line) {



int main()
{

    int choice;

    cout<<"Conference Center Management System"<<endl<<endl;
    cout<<"1. Schedule Conference"<<endl;
    cout<<"2. Edit Conference"<<endl;
    cout<<"3. Remove Conference"<<endl;
    cout<<"4. View Scheduled Conferences"<<endl;
    cout<<"5. Exit Conference Center Management System"<<endl;

    cin>>choice;

    switch(choice)
    {
        case 1:
            {
                //Schedule new conference
            }
        break;
        case 2:
            {
                //Edit Conference
            }
        break;
        case 3:
            {
                //Remove Conference
            }
        break;
        case 4:
            {
                //View Scheduled Conferences
            }
        break;
        case 5:
            {
                //Exit program
            }
        break;

    }




    /*
    std::string line;
    while (true) {
        std::cin >> line;
		if (line == "quit" || line == "q") {
		    break;
	    }
		handle_command(line);
    }
    std::cout << "bye!" << std::endl;*/
    system("PAUSE");
    return 0;
}
