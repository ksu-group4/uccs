/**
conference.h
Declaration file for the class conference.

A conference is a meeting for consultation, discussion or to settle disputes of significant matter.
*/

#ifndef INCLUDED_CONFERENCE_H
#define INCLUDED_CONFERENCE_H
#include <string>
#include <vector>
class session;


class conference {
public:

private:
    int id;
    int cost;
    std::string name;
    std::vector<session*> sessions;
};

#endif
