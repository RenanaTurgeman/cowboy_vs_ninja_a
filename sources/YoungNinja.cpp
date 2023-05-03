#include "YoungNinja.hpp"

using namespace ariel;
using namespace std;

YoungNinja::YoungNinja(string name, Point location): Ninja(name,location,150,8){

}

void YoungNinja::move(const Character& enemy){
    return Ninja::move(enemy);
}
void YoungNinja::slash(const Character& enemy) {
    return Ninja::slash(enemy);
}

bool YoungNinja::isAlive() const {
    return Ninja::isAlive();
}
            
double YoungNinja::distance(const Character& other) const {
    return Ninja::distance(other);
}

void YoungNinja::hit(int num){
    return Ninja::hit(num);
}

string YoungNinja::getName() const {
    return Ninja::getName();
}

Point YoungNinja::getLocation() const {
    return Ninja::getLocation();
}

void YoungNinja::print() {
    
}