
    room:
    * association with session
    
    person:
    * association with conference
    * generalization of guest
    
    admin:
    * derived from person
    * association with conference
    
    tech:
    * derived from person
    * association with equipment
    * association with session
    * association with room
    
    guest:
    * association with session
    * association with conference
    * inheritence from person
    
    equipment:
    * association with tech
    * association with session
    * association with room
    
    conference:
    * aggregation of sessions
    
    session:
    * aggregation with conference
    * association with room
    
    presentation:
    * aggregation with session
    * association with room
    
    schedule:
    * aggregation of conferences
    
