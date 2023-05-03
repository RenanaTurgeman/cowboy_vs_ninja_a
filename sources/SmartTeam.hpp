#ifndef SMART_TEAM_HPP
#define SMART_TEAM_HPP

#include "OldNinja.hpp"
#include "TrainedNinja.hpp"
#include "YoungNinja.hpp"
#include "Cowboy.hpp"

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
            void attack(SmartTeam* enemyTeam);
            int stillAlive() const;
            void print() const;
            friend std::ostream& operator<<(std::ostream& ostream, const SmartTeam& smartTeam); //TODO: check if really need (not work without)

    };
}

#endif
