/*
tech.h
Declaration file for the class tech

A technician is a qualified person that attends each session to provide technical support and to monitor/report on the status
*/

#ifndef _TECH_H
#define _TECH_H

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>

using namespace std;

class Tech
{
    private:
        string room;
        string name;
    public:
        Tech();
        void addTech();
        void listTechs();
        queue<string> tech_names;
		queue<string> room_num;
};

#endif
