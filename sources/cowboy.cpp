#include <iostream>  
#include <cmath>
#include "cowboy.hpp"

using namespace std;
using namespace ariel;

void Cowboy:: shoot(Character* enemy){
    if(this->is_Alive() && this->hasboolets() && enemy->is_Alive()) {
        enemy->hit(10);
        this->_bullets -=1;
    }
}