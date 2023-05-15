#pragma once
#include <iostream>
#include "point.hpp"
namespace ariel{

    class Character{
        Point _location;
        int _hit_point;
        std::string _name;

        public:
        //constructors

        Character(int hitpoint,Point location,std::string name):
            _hit_point(hitpoint),_location(location),_name(name) {}
        
        std::string getName(){
            return _name;
        }
        Point getLocation(){
            return _location;
        }
       
        void print();
        bool is_Alive();
        double distance(Point dst);
        void hit(int hit);



    };

}