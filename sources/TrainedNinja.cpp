#include "TrainedNinja.hpp"

using namespace ariel;
using namespace std;

TrainedNinja::TrainedNinja(string name, Point location): Ninja(name,location,150,8){

}

void TrainedNinja::move(const Character* enemy){
    return Ninja::move(enemy);
}
void TrainedNinja::slash(const Character* enemy) {
    return Ninja::slash(enemy);
}

bool TrainedNinja::isAlive() const {
    return Ninja::isAlive();
}
            
double TrainedNinja::distance(const Character& other) const {
    return Ninja::distance(other);
}

void TrainedNinja::hit(int num) {
    return Ninja::hit(num);
}

string TrainedNinja::getName() const {
    return Ninja::getName();
}

Point TrainedNinja::getLocation() const {
    return Ninja::getLocation();
}

void TrainedNinja::print() {
    
}

ostream& ariel::operator<<(std::ostream& ostream, const TrainedNinja& trainedNinja){
    return  ostream;
}