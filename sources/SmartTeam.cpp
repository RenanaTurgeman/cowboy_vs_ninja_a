#include "SmartTeam.hpp"
using namespace ariel;
using namespace std;
SmartTeam::SmartTeam(Character* leader): leader(leader), fighters(){
//    fighters.push_back(leader);
}

void SmartTeam::add(Character* fighter){

}

void SmartTeam::attack(SmartTeam* enemyTeam){

}

int SmartTeam::stillAlive() const{
    return 1;
}

string SmartTeam::print() const{
    return "hi";

}
ostream& ariel::operator<<(std::ostream& ostream, const SmartTeam& smartTeam){
    return  ostream;
}