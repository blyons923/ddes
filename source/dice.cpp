#include "dice.h"
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
