#pragma once
#include "character.hpp"


namespace ariel{


    class Cowboy : public Character{
        int _bullets;

        public:
        Cowboy(Point location,std::string name):
            Character(Character(110,location,name)), _bullets(6){}
        
        void reload(){
            _bullets = 6;
        }
        bool hasboolets(){
            if(_bullets == 0)return false;
            else return true;
        }
        void shot(Character * enemy);
    };

}