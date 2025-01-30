#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "chance.h"
using namespace std;

    void Dice::roll_dice(){
        side = rand() % 6 + 1;
    }
    Dice::Dice(int s){
        side=s;
    }
