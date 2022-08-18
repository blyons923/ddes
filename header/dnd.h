// dnd.h
#ifndef DND_H
#define DND_H

#include "iostream"
#include "string"
#include "list"

class Monster {
private:
    std::string name;
    char size;
    std::string type;
    int armor_class,
        hit_points,
        speed,
        strength,
        dexterity,
        constitution,
        intelligence,
        wisdom,
        charisma,
        proficiency_modifier,
        str_save,
        dex_save,
        con_save,
        int_save,
        wis_save,
        cha_save,
        passive_perception;
    const std::string damage_types[14] = {"acid", "bludgeoning", "cold", "fire", "force", "lightning", "necrotic", "nonmagical", "piercing", "poison", "psychic", "radiant", "slashing", "thunder"};
    bool damage_resistances[14];
    bool damage_immunities[14];
    const std::string condition_types[15] = {"blinded", "charmed", "deafened", "exhaustion", "frightened", "grappled", "incapacitated", "invisible", "paralyzed", "petrified", "poisoned", "prone", "restrained", "stunned", "unconscious"};
    bool condition_immunities[15];
    /* list of sets of four integers: 
    (attack bonus, number of dice, dice type, damage modifier) */
//    std::list<int[4]> melee_attack;
//    std::list<int[4]> ranged_attack;
public:
    Monster();
    Monster(std::string, char, std::string, int[17], bool[14], bool[14], bool[15]);
    void display();
};

#endif
