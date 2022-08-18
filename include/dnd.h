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
#ifndef DND_H
#define DND_H

#include "iostream"
#include "string"

int getMod(int);

class Monster {
private:
    std::string name;
    char size;
    std::string type;
    int armor_class,
        hit_points,
        speed,
        proficiency_mod,
        passive_perception;
    int attribute_mod[6];
    const std::string damage_types[14] = {"acid", "bludgeoning", "cold", "fire", "force", "lightning", "necrotic", "nonmagical", "piercing", "poison", "psychic", "radiant", "slashing", "thunder"};
    const std::string proficiencies_list[6] = {"Strength", "Dexterity", "Constitution", "Intelligence", "Wisdom", "Charisma"};
    const std::string condition_types[15] = {"blinded", "charmed", "deafened", "exhaustion", "frightened", "grappled", "incapacitated", "invisible", "paralyzed", "petrified", "poisoned", "prone", "restrained", "stunned", "unconscious"};
    bool damage_resistances[14];
    bool damage_immunities[14];
    bool proficiencies[6];
    bool condition_immunities[15];
public:
    Monster();
    Monster(std::string, char, std::string, int, int, int, int, int, int, int, int, int, int, int, bool[6], bool[14], bool[14], bool[15]);
    void display();
};

#endif
