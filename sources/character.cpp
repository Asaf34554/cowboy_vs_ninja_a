#include <iostream>  
#include <cmath>
#include "character.hpp"

using namespace std;
using namespace ariel;



// string Character::print(){
//     if(this->is_Alive()){
//         cout <<"("<< _name << ")" <<endl;
//     }
//     else{
//         cout << _name << endl;
//         cout<< _hit_point << endl;
//         _location.print();
//     }
// }


double Character:: distance(Character* dst){
    return this->_location.distance(dst->getLocation());
}

void Character:: hit(int hit){
    if(_hit_point -hit <=0){
        _hit_point =0;
    }
    else _hit_point -=hit;
}

bool Character:: is_Alive(){
    if(_hit_point == 0){
        return false;
    }
    else return true;
}

    
