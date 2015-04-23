/*
room.h
Declaration file for the class room.

A room is an area to reserve, if available, to hold a conference. There are three different sized rooms, each with a different price.
*/

#ifndef INCLUDED_ROOM_H
#define INCLUDED_ROOM_H

#include <string>
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Room
{
    private:
        string roomName;
        int roomCost;
        int guestMax;
        bool res_val;
        string reserved;

    public:
        Room(string name, int price, int max_cap, bool available);
        void DisplayRoom();
        string ReservationStatus(bool res_val);
        void ChangeRoomStatus();

};


#endif
