#include "Character.hpp"

using namespace ariel;
using namespace std;

Character::Character(string name, Point& location, int hit_point):name(name) , location(location), hit_point(hit_point{ }

 bool Character::isAlive() const{
    return true;
 }

double Character::distance(const Character& other) const{
    return 0;
}
            
void Character::hit(int num){

}

string getName() const{
    return this->name;
}

            
Point getLocation() const{
    return this->location;
}

void Character::print(){
    
}