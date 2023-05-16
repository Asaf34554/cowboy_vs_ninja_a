#pragma once
#include "cowboy.hpp"
#include "youngninja.hpp"
#include "trainedninja.hpp"
#include "oldninja.hpp"


namespace ariel{
    class Team{
        int num_of_warriors;
        Character* warriors[10];


        public:
            Team(Character* warrior);
            ~Team(){
                delete[] warriors;
            }

            
            void add(Character* warrior);
            
            void attack(Team* rival);
            
            int stillAlive(){
                return num_of_warriors;
            }
            void print();

    };
}