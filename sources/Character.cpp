#include "Character.hpp"
#include <iostream>

using namespace ariel;
using namespace std;

Character::Character(string name, Point& location, int hit_point):name(name) , location(location), hit_point(hit_point){ }

 bool Character::isAlive() const{
    return true;
 }

double Character::distance(const Character& other) const{
    return 0;
}
            
void Character::hit(int num){

}

string Character::getName() const{
    return this->name;
}

            
Point Character::getLocation() const{
    return this->location;
}

void Character::print(){
    
}

ostream& ariel::operator<<(std::ostream& ostream, const Character& character){
    return  ostream;
}
