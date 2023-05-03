#ifndef TEAM_HPP
#define TEAM_HPP

#include "Character.hpp"
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

namespace ariel {
    class Team{
        private:
            std::vector<std::unique_ptr<Character>> fighters; // vector to hold the fighters in the team
            Character& leader; // pointer to the team leader
        public:
            // constructor and destructor
            Team(Character& leader);
            ~Team() = default;
            // member functions
            void add(Character* fighter);
            void attack(Team& enemyTeam);
            int stillAlive() const;
            void print() const;
    };
}

#endif
