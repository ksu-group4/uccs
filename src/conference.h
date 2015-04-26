/*
conference.h
Declaration file for the class conference.

A conference is a meeting for consultation, discussion or to settle disputes of significant matter.
*/

#ifndef INCLUDED_CONFERENCE_H
#define INCLUDED_CONFERENCE_H

#include <string>
#include <vector>
#include <cstdlib>
#include <iostream>

using namespace std;

class session;


class conference
{
    public:
        conference();
        ~conference();
        void addConference();
        void removeConference();

    private:
        string buisnessName;
        int total_cost;
        string name;
        vector<session*> sessions;
};

#endif
