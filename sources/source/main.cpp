/*
    ddes - dungeons and dragons encounter emulator
    Copyright (C) 2022 Bowen Lyons

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
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
