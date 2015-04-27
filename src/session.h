/*
session.h
Declaration file for the class session.

A Session is a single sitting for conference of those assembled
*/

#ifndef INCLUDED_SESSION_H
#define INCLUDED_SESSION_H
#include <string>

class conference; // forward declaration.
typedef conference* conference_ref;

class session {
public:
        session();
        ~session();
        void addSession();
        void removeSession();

private:
    int id;
    conference_ref cid; /// reference to the conference this session belongs to.
    std::string name;   /// Name of the session.
    bool is_paid;  /// Is this session a paid session?
};

#endif
