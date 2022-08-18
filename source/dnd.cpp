#include "dnd.h"

Monster::Monster() {
    // default constructor
}

Monster::Monster(std::string _name, char _size, std::string _type, int _stats[17], bool _damage_resistances[14], bool _damage_immunities[14], bool _condition_immunities[15]) {
    name = _name;
    size = _size;
    type = _type;
    armor_class = _stats[0];
    hit_points = _stats[1];
    speed = _stats[2];
    strength = _stats[3];
    dexterity = _stats[4];
    constitution = _stats[5];
    intelligence = _stats[6];
    wisdom = _stats[7];
    charisma = _stats[8];
    proficiency_modifier = _stats[9];
    str_save = _stats[10];
    dex_save = _stats[11];
    con_save = _stats[12];
    int_save = _stats[13];
    wis_save = _stats[14];
    cha_save = _stats[15];
    passive_perception = _stats[16];
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
    std::cout << "Monster: " << name << "\nSize: " << size << "\nType: " << type << "\nAC: " << armor_class << "\tHP: " << hit_points << "\tSpeed: " << speed << "ft\nSTR: " << strength << "\tDEX: " << dexterity << "\tCON: " << constitution << "\nINT: " << intelligence << "\tWIS: " << wisdom << "\tCHA: " << charisma << "\nSaving Throws: STR: " << str_save << " DEX: " << dex_save << " CON: " << con_save << " INT: " << int_save << " WIS: " << wis_save << " CHA: " << cha_save << "\nPassive Perception: " << passive_perception << "\nDamage Resistances: ";
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
    std::cout << "\n";
}
