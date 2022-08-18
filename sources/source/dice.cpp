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

#include "sources/source/dice.h"
#include "ctime"
#include "cstdlib"

//      random number definition: returns random number between 1 and max
int randomnum(int max) {
    std::srand(rand() * std::time(NULL));
    return (1 + (rand() % max));
}

//      dice rolling definitions: self explanatory
int rolld20() {
    return randomnum(20);
}
int rolld12() {
    return randomnum(12);
}
int rolld10() {
    return randomnum(10);
}
int rolld8() {
    return randomnum(8);
}
int rolld6() {
    return randomnum(6);
}
int rolld4() {
    return randomnum(4);
}
int rollsumd20(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(20);
    }
    return sum;
}
int rollsumd12(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(12);
    }
    return sum;
}
int rollsumd10(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(10);
    }
    return sum;
}
int rollsumd8(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(8);
    }
    return sum;
}
int rollsumd6(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(6);
    }
    return sum;
}
int rollsumd4(int dice_count) {
    int sum = 0;
    for (int i = 0; i < dice_count; i++) {
        sum += randomnum(4);
    }
    return sum;
}
