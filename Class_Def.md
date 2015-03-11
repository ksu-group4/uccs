Class name:
	  Technician;
Documentation:
Definition:
	  A Technician is a qualified person that attends each session to provide technical support and to monitor/report on       the status of each piece of equipment in 	attendence; replace equipment if required.
Constraints:
	  A Technician must be part of a session. A Technician must report on the status of each 	piece of equipment. If broken     , the Technician must replace the piece of 	equipment if a replacement is available. A Technician cannot be              assigned to two sessions taking place concurrently.


Class name:
	  Equipment;
Documentation:
Definition:
	  Equipment is an item used for a presentation that is reservered for a session. 
Constraints:
	  A piece of equipment can only be reserved for one session at a time. If a piece of 	equipment is broken it cannot be     available for reservation until fixed by a technician.
