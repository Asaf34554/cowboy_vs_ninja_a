#pragma once
#include "character.hpp"


namespace ariel{
    class Ninja : public Character{
        int _speed;

        public:
        Ninja(int speed,std::string name,Point location):
            Character(Character(0,location,name)),_speed(speed){}
        
        
        void slash(Character* enemy){
            if(this->distance(enemy->getLocation()) <= 1.0 && this->is_Alive()){
                enemy->hit(40);
            }
            else std:: cout << "The ninja is too far" <<std:: endl;
        }

    };
}