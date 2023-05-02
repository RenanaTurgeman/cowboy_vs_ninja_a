#include "OldNinja.hpp"

using namespace ariel;
using namespace std;

OldNinja::OldNinja(const string name, const Point location): Ninja(name,location,150,8){

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
    return Ninja::distance();
}

void OldNinja::hit(int num) override{
    return Ninja::hit();
}

string OldNinja::getName() const {
    return Ninja::getName();
}

Point OldNinja::getLocation() const {
    return Ninja::getLocation();
}

void OldNinja::print() {
    
}