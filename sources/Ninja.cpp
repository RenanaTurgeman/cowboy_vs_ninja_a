#include "Ninja.hpp"

using namespace ariel;
using namespace std;

Ninja::Ninja(string name, Point& location, int hit_point, int speed): Character(name, location, hit_point) , speed(speed){
    
}


void Ninja::move(const Character* enemy){

}

void Ninja::slash(const Character* enemy){

}

bool Ninja::isAlive() const {
    return Character::isAlive();
}
            
double Ninja::distance(const Character& other) const {
    return Character::distance(other);
}
            
void Ninja::hit(int num) {
    return Character::hit(num);
}

string Ninja::getName() const {
    return Character::getName();
}

Point Ninja::getLocation() const {
    return Character::getLocation();
}

void Ninja::print() {
    
}

ostream& ariel::operator<<(std::ostream& ostream, const Ninja& ninja){
    return  ostream;
}
