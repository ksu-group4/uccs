/*
tech.h

Declaration file for the class tech.
Equipment is an item used for a presentation that is reservered for a session. 
*/

#ifndef INCLUDED_EQUIPMENT_H
#define INCLUDED_EQUIPMENT_H

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>

using namespace std;

class equipment {
public:
  equipment();
  bool is_broken();
  void list_equip();
  void assign_equip();
  queue<string> equipment_names;
  queue<string> room_names;
private:
  bool broken = false;
  string eq_name;
  string room_name;
};

#endif
