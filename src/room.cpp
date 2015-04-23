/*
room.cpp
Declaration file for the class room.

A room is an area to reserve, if available, to hold a conference. There are three different sized rooms, each with a different price.
*/

#include "room.h"

//Initializes the three rooms of the conference center.
Room::Room(string name, int price, int max_cap, bool available)
{
    roomName = name;
    roomCost = price;
    guestMax = max_cap;
    res_val = available;
    reserved = ReservationStatus(res_val);
}

//Outputs the room information.
void Room::DisplayRoom()
{
    cout<<"Name of Conference Room: "<<roomName<<endl;
    cout<<"Room Reservation Cost: "<<roomCost<<endl;
    cout<<"Maximum Occupancy: "<<guestMax<<endl;
    cout<<"Reservation Status: "<<reserved<<endl;
}

//Checks for the status of the room to see if its reserved.
string Room::ReservationStatus(bool res_val)
{
    if(res_val==0)
        return "Not Reserved";
    else
        return "Reserved";

}

//Changes the status of the room to be reserved or not reserved.
void Room::ChangeRoomStatus()
{
     if(res_val==0)
     {
        res_val=1;
     }
     else
     {
        res_val=0;
     }
     reserved=ReservationStatus(res_val);

}
