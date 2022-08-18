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

#include "dnd.h"

int getMod(int skill) {
    if (skill == 1) {
        return -5;
    } else if (skill == 2 || skill == 3) {
        return -4;
    } else if (skill == 4 || skill == 5) {
        return -3;
    } else if (skill == 6 || skill == 7) {
        return -2;
    } else if (skill == 8 || skill == 9) {
        return -1;
    } else if (skill == 10 || skill == 11) {
        return 0;
    } else if (skill == 12 || skill == 13) {
        return 1;
    } else if (skill == 14 || skill == 15) {
        return 2;
    } else if (skill == 16 || skill == 17) {
        return 3;
    } else if (skill == 18 || skill == 19) {
        return 4;
    } else if (skill == 20 || skill == 21) {
        return 5;
    } else if (skill == 22 || skill == 23) {
        return 6;
    } else if (skill == 24 || skill == 25) {
        return 7;
    } else if (skill == 26 || skill == 27) {
        return 8;
    } else if (skill == 28 || skill == 29) {
        return 9;
    } else if (skill == 30) {
        return 10;
    }
    // handle error
    return -10;
}

Monster::Monster() {
    // default constructor
}

Monster::Monster(std::string _name, char _size, std::string _type, int _armor_class, int _hit_points, int _speed, int _passive_per, int _str, int _dex, int _con, int _int,int _wis, int _cha, int _proficiency_mod, bool _proficiencies[6], bool _damage_resistances[14], bool _damage_immunities[14], bool _condition_immunities[15]) {
    name = _name;
    size = _size;
    type = _type;
    armor_class = _armor_class;
    hit_points = _hit_points;
    speed = _speed;
    passive_perception = _passive_per;
    proficiency_mod = _proficiency_mod;
    attribute_mod[0] = getMod(_str);
    attribute_mod[1] = getMod(_dex);
    attribute_mod[2] = getMod(_con);
    attribute_mod[3] = getMod(_int);
    attribute_mod[4] = getMod(_wis);
    attribute_mod[5] = getMod(_cha);
    for (int i = 0; i < 6; i++) {
        if (_proficiencies[i]) {
            attribute_mod[i] += proficiency_mod;
        }
    }
    for (int i = 0; i < 14; i++) {
        damage_resistances[i] = _damage_resistances[i];
    }
    for (int i = 0; i < 14; i++) {
        damage_immunities[i] = _damage_immunities[i];
    }
    for (int i = 0; i < 15; i++) {
        condition_immunities[i] = _condition_immunities[i];
    }
}

void Monster::display() {
    std::cout << "Monster: " << name << "\nSize: " << size << "\nType: " << type << "\nAC: " << armor_class << "\tHP: " << hit_points << "\tSpeed: " << speed << "ft\nModifiers:\nSTR: " << attribute_mod[0] << "\tDEX: " << attribute_mod[1] << "\tCON: " << attribute_mod[2] << "\nINT: " << attribute_mod[3] << "\tWIS: " << attribute_mod[4] << "\tCHA: " << attribute_mod[5] << "\nPassive Perception: " << passive_perception << "\nDamage Resistances: ";
    int counter = 0;
    for (int i = 0; i < 14; i++) {
        if (damage_resistances[i]) {
            std::cout << damage_types[i] << " ";
            counter++;
        }
    }
    if (counter == 0)
        std::cout << "none";
    else
        counter = 0;
    std::cout << "\nDamage Immunities: ";
    for (int i = 0; i < 14; i++) {
        if (damage_immunities[i]) {
            std::cout << damage_types[i] << " ";
            counter++;
        }
    }
    if (counter == 0)
        std::cout << "none";
    else
        counter = 0;
    std::cout << "\nCondition Immunities: ";
    for (int i = 0; i < 15; i++) {
        if (condition_immunities[i]) {
            std::cout << condition_types[i] << " ";
            counter++;
        }
    }
    if (counter == 0)
        std::cout << "none";
    else
        counter = 0;
    std::cout << "\nProficiencies: ";
    for (int i = 0; i < 6; i++) {
        if (proficiencies[i]) {
            std::cout << proficiencies_list[i] << " ";
            counter++;
        }
    }
    if (counter == 0)
        std::cout << "none\n";
    else
        counter = 0;
}
