#ifndef SMARTTEAM_HPP
#define SMARTTEAM_HPP

#include "Character.hpp"
#include <iostream>
#include <vector>
using namespace std;

namespace ariel {
    class SmartTeam{
        private:
            vector<Character*> fighters; // vector to hold the fighters in the team
            Character* leader; // pointer to the team leader
        public:
            // constructor and destructor
            SmartTeam(Character* leader);
            ~SmartTeam() = default;
            // member functions
            void add(Character* fighter);
            void attack(SmartTeam& enemyTeam);
            int stillAlive() const;
            void print() const;
    };
}

#endif
