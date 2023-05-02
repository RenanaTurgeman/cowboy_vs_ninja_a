#include "Team2.hpp"

Team2::Team2(Character* leader):leader(leader){
    fighters.push_back(leader);
}

void Team2::add(Character* fighter){

}

void Team2::attack(Team2& enemyTeam){

}

int Team2::stillAlive() const{
    return 1;
}
            
void Team2::print() const{
    
}