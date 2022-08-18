// dice.h
#ifndef DICE_H
#define DICE_H
//  randomnum() will return same results when called too rapidly, requires a time seed.
//      random number declaration: returns random number between 1 and max
int randomnum(int);

//      dice rolling declarations:
//          roll 1 dice of the type called
int rolld20();
int rolld12();
int rolld10();
int rolld8();
int rolld6();
int rolld4();
//          roll dice_count worth of dice, return sum
int rollsumd20(int);
int rollsumd12(int);
int rollsumd10(int);
int rollsumd8(int);
int rollsumd6(int);
int rollsumd4(int);

#endif
