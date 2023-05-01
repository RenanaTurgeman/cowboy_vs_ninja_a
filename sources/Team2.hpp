#ifndef TEAM2_HPP
#define TEAM2_HPP

#include "Character.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace ariel {
    class Team2{
        private:
            std::vector<Character*> fighters; // vector to hold the fighters in the team
            Character* leader; // pointer to the team leader
        public:
            // constructor and destructor
            Team2(Character* leader);
            ~Team2();
            // member functions
            void add(Character* fighter);
            void attack(Team2* enemyTeam);
            int stillAlive();
            void print();
    };
}

#endif
