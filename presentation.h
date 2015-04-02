/*
presentation.h
Declaration file for the class presentation.

A Presentation is a demonstration or lecture.
*/

#ifndef INCLUDED_PRESENTATION_H
#define INCLUDED_PRESENTATION_H
#include <string>

typedef session* session_ref; /// Type decleration for refering to a session.
class session; // farward declare session class.

class presentation {
public:

private:
    int id;
    session_ref session;
    std::string name;
    bool is_paid; /// does this presentation require payment?
};

#endif
