#include "Team.hpp" //TODO: change to team 2
using namespace ariel;
using namespace std;
Team::Team(Character& leader): leader(leader), fighters(){
//    fighters.push_back(leader);
}

void Team::add(Character* fighter){

}

void Team::attack(Team& enemyTeam){

}

int Team::stillAlive() const{
    return 1;
}

void Team::print() const{

}