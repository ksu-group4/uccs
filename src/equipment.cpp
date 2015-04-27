/*
equipment.cpp
Declaration file for the class equipment.
*/

#include "equipment.h"

Equipment::Equipment()
{
 broken = false; // Deafault COnstructor
}

bool Equipment::is_Broken()
{
  broken = true;
}

void assign_equip()
{
  char answer;
  string input_type;
  string input_room;
  
  do{
    cout << "Assign equipment piece to a room?  (y/n) \n";
    cin >> answer;
    
    if(answer == 'y' || answer == 'Y'){
      cout << "what is the type of equipment? \n";
      cin << input_type; 
      eq_name = input_type;
      equipment_names.push(eq_name);
      
      cout << "Enter room to assign to  \n"
      cin >> input_room;
      room_name = input_room;
      room_names.push(room_name);
    } 
  } while (answer == 'y' || answer == 'Y')
}

void list_equip()
{
  while(!equimpent_names.empty()){
    cout << equipment_names.front() << endl;
    cout << room_names.front() << endl;
    if(broken == false){
      cout << "equipment is functioning properly" << endl;
    else
      cout << "equipment is currently broken" << endl;
    equipment_names.pop();
    room_names.pop();
    }
  }
}


/*
Equipment is an item used for a presentation that is reservered for a session. 
*/
