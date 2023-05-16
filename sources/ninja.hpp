#pragma once
#include "character.hpp"


namespace ariel{
    class Ninja : public Character{

        int _speed;
        
        public:
        Ninja(int hitPoint,Point location,std::string name,int speed):
            Character(hitPoint,location,name),_speed(speed){}
        ~Ninja(){
            
        }

        void slash(Character* enemy){
            if(this->distance(enemy) <= 1.0 && this->is_Alive()){
                enemy->hit(40);
            }
            else std:: cout << "The ninja is too far" <<std:: endl;
        }
        std:: string print(){
            if(this->is_Alive()){
                std:: string ans = "Name: N" + this->getName() + "\nLife: " + std:: to_string(this->lifePoint()) +"\nLocation: ("+std:: to_string(this->getLocation().getX())+","+std:: to_string(this->getLocation().getY())+")"; 
                return ans;
            }
            else{
                std:: string ans = "Name: N(" + this->getName() +")\nLocation: ("+std:: to_string(this->getLocation().getX())+","+std:: to_string(this->getLocation().getY())+")"; 
                return ans;
            }
        }
        void move(Character * enemy);
    };
}