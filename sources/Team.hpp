#ifndef TEAM_HPP
#define TEAM_HPP

#include "Character.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace ariel {
    class Team{
        private:
            std::vector<Character*> fighters; // vector to hold the fighters in the team
            Character* leader; // pointer to the team leader
        public:
            // constructor and destructor
            Team(Character* leader);
            ~Team();
            // member functions
            void add(Character* fighter);
            void attack(Team* enemyTeam);
            int stillAlive();
            void print();
    };
}

#endif
