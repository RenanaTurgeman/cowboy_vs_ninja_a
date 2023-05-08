#include "Team.hpp"
using namespace ariel;
using namespace std;
Team::Team(Character* leader): leader(leader), fighters(){
//    fighters.push_back(leader);
}

void Team::add(Character* fighter){

}

void Team::attack(Team* enemyTeam){

}

int Team::stillAlive() const{
    return 1;
}

string Team::print() const{
    return "hi";

}

ostream& ariel::operator<<(std::ostream& ostream, const Team& team){
    return  ostream;
}