#include "Cowboy.hpp"

using namespace ariel;
using namespace std;

Cowboy::Cowboy(string name, Point& location):Character(name , location , 11){ }

void Cowboy::shoot(Character& enemy){

}

void Cowboy::reload(){

}

bool Cowboy::hasboolets() const {
    return bullet > 0;
}

//void Cowboy::reload() {
//    bullet = 6;
//}

bool Cowboy::isAlive() const {
    return Character::isAlive();
}

double Cowboy::distance(const Character& other) const {
    return 0;
}

void Cowboy::hit(int num) {
}

string Cowboy::getName() const {
    return getName();
}

Point Cowboy::getLocation() const {
    return getLocation();
}

void Cowboy::Print() {
    // cout << "Cowboy " << getName() << " is at location (" << getLocation().getX() << ", " << getLocation().getY() << ")" << endl;
}

