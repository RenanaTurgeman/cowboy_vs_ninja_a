#include "TrainedNinja.hpp"

using namespace ariel;
using namespace std;

TrainedNinja::TrainedNinja(const string name, const Point location): Ninja(name,location,150,8){

}

void TrainedNinja::move(const Character& enemy){
    return Ninja::move(enemy);
}
void TrainedNinja::slash(const Character& enemy) {
    return Ninja::slash(enemy);
}

bool TrainedNinja::isAlive() const {
    return Ninja::isAlive();
}
            
double TrainedNinja::distance(const Character& other) const {
    return Ninja::distance();
}

void TrainedNinja::hit(int num) override{
    return Ninja::hit();
}

string TrainedNinja::getName() const {
    return Ninja::getName();
}

Point TrainedNinja::getLocation() const {
    return Ninja::getLocation();
}

void TrainedNinja::print() {
    
}