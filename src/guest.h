/*
guest.h
Declaration file for the class guest.

Guest represents a visitor to the conference.
*/

#ifndef _GUEST_H
#define _GUEST_H

#include <string>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

class Guest
{
    private:
        string name;
    public:
        Guest();
        void addGuest();
        void listGuests();
        queue<string> guestList;
};

#endif
