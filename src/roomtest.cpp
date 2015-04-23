//File to test the class room.

#include "room.h"

int main()
{
    Room roomOne("Roosevelt", 300, 50, 1);
    Room roomTwo("Lincoln", 400, 100, 0);
    Room roomThree("Washington", 500, 150, 1);

    roomOne.DisplayRoom();
    roomTwo.DisplayRoom();
    roomThree.DisplayRoom();

    roomOne.ChangeRoomStatus();

    roomOne.DisplayRoom();
    roomTwo.DisplayRoom();
    roomThree.DisplayRoom();


    system("PAUSE");
    return 0;
}

