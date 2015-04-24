/*
admin.h
Declaration file for the class admin

An Administrator is a user with privileges to access and edit protected information that is restricted to other users.
*/

#ifndef _ADMIN_H
#define _ADMIN_H

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>

using namespace std;

class Admin
{
    private:
        string ID_num;
        string name;
    public:
        Admin();
        void addAdmin();
        void listAdmins();
        queue<string> admin_names;

};

#endif
