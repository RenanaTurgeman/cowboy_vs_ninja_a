#include "OldNinja.hpp"

using namespace ariel;
using namespace std;

OldNinja::OldNinja(string name, Point location) : Ninja(name, location, 150, 8){

}

void OldNinja::move(const Character& enemy){
    return Ninja::move(enemy);
}
void OldNinja::slash(const Character& enemy) {
    return Ninja::slash(enemy);
}

bool OldNinja::isAlive() const {
    return Ninja::isAlive();
}
            
double OldNinja::distance(const Character& other) const {
    return Ninja::distance(other);
}

void OldNinja::hit(int num){
    return Ninja::hit(num);
}

string OldNinja::getName() const {
    return Ninja::getName();
}

Point OldNinja::getLocation() const {
    return Ninja::getLocation();
}

void OldNinja::Print() {
    
}