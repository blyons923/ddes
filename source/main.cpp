/*
    DDESP - Dungeons and Dragons Encounter Emulator (Prototype)
    Author: Bowen Lyons
*/

#include "iostream"
#include "string"
#include "dice.h"
#include "dnd.h"

int main() {
    std::string name = "Bowen", type = "Celestial";
    char size = 'L';
    int stats[] = {20,999,69,20,20,20,20,20,20,7,27,27,27,27,27,27,420};
    bool dmg_res[] = {0,1,0,0,0,1,0,1,0,1,0,0,0,0};
    bool dmg_imu[] = {1,1,1,1,1,0,1,0,1,0,1,0,1,1};
    bool cnd_imu[] = {1,1,1,1,1,1,0,0,0,0,0,0,1,1,1};
    Monster m = Monster(name,size,type,stats,dmg_res,dmg_imu,cnd_imu);
    m.display();

    return 0;
}
