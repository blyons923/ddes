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
