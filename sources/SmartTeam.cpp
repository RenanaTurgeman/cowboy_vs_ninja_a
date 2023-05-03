#include "SmartTeam.hpp"
using namespace ariel;
using namespace std;
SmartTeam::Team(Character& leader): leader(leader), fighters(){
//    fighters.push_back(leader);
}

void SmartTeam::add(Character* fighter){

}

void SmartTeam::attack(SmartTeam& enemyTeam){

}

int SmartTeam::stillAlive() const{
    return 1;
}

void SmartTeam::print() const{

}