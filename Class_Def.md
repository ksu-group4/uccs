

Class name:
* Technician;

Documentation:

Definition:
* A Technician is a qualified person that attends each session to provide technical support and to monitor/report on the   status of each piece of equipment in attendence; replace equipment if required. 

Constraints: 
* A Technician must be part of a session. A Technician must report on the status of each piece of equipment. If broken,    the Technician must replace the piece of equipment if a replacement is available. A Technician cannot be assigned to     two sessions taking place concurrently.

========
========

Class name:
* Equipment; 

Documentation: 

Definition: 
* Equipment is an item used for a presentation that is reservered for a session. 

Constraints:
* A piece of equipment can only be reserved for one session at a time. If a piece of equipment is broken it cannot be      available for reservation until fixed by a technician.

========
========

Class Name:
* Room;

Documentation:

Definition:
* A room is an area to reserve, if available, to hold a conference.  There are three different sized rooms, each with a different price. 

Constraints:
* A room may be reserved by only one conference per session, but a conference may reserve more than one room for a session, if they are available.

========
========

Class Name:
* Administrator;

Documentation:

Definition:
* An Administrator is a user with privileges to access and edit protected information that is restricted to other users.  

Constraints:
* An Administrator must have a username and password to access the restricted information.  


