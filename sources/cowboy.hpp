#pragma once
#include "character.hpp"


namespace ariel{


    class Cowboy : public Character{
        int _bullets;

        public:
        Cowboy(std::string name,Point location):
            Character(Character(110,location,name)), _bullets(6){}
        ~Cowboy(){
            
        }
        
        void reload(){
            _bullets = 6;
        }
        bool hasboolets(){
            if(_bullets == 0)return false;
            else return true;
        }
        int NumOfBullets(){
            return _bullets;
        }
        std:: string print(){
            if(this->is_Alive()){
                std:: string ans = "Name: C" + this->getName() + "\nLife: " + std:: to_string(this->lifePoint()) +"\nLocation: ("+std:: to_string(this->getLocation().getX())+","+std:: to_string(this->getLocation().getY())+")"; 
                return ans;
            }
            else{
                std:: string ans = "Name: C(" + this->getName() +")\nLocation: ("+std:: to_string(this->getLocation().getX())+","+std:: to_string(this->getLocation().getY())+")"; 
                return ans;
            }
        }    
        void shoot(Character * enemy);

    };

}