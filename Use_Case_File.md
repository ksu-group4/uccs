Use case name: Admin Manage Schedule
Use case purpose: this case gives the admin to manage the schedule by creating conferences, the sessions within, calculating the bill, and reserving equipment.
Optimistic flow:
A. admin checks schedule
B. admin adds a conference if spot available
C. admin adds sessions if times available
     1. record room
D. assigns a tech to each session
E. reserves the needed equipment for the session
F. admin calculates total bill for each conference


Use case name: Equipment Use
Use case purpose: this case gives the equipment piece the ability to be used for an assigned session
Optimistic flow:
A. equipment is assigned a session
      1. goes to room
      2. used in presentation
B. report if broken
      1. equipment functioning properly
Alternate flow: equipment broken
A. report broken
B. sent out to be fixed
      1. unavailable for use
      
      
Use case name: guest registration
Use case purpose: this use case gives the guest the ability to attend a conference, choose a session, pay for a special session if desired, and go to the room to view the presentation
Optimistic flow:
A. guest registers for conference
B. picks a session 
C. goes to room
D. views presentation
Alternate flow: if special session desired
A. pick special session
B. fill out forms
C. pay for session
D. go to room 
E. view presentation


Use case name: tech manages equipment
Use case pupose: this use cas gives the tech the ability to manage all equipment in a session and provide support
Optimistic flow:
A. attend assigned session
B. monitor equipment
Alternate flow: support needed
A. attend session
B. provide support
Alternate flow: equipment breaks
A. attend session
B. monitored equipment breaks
C. fix broken equipment
