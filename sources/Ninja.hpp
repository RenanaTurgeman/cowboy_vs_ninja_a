#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    class Ninja : public Character{
        private:
            int speed; 
        public:
            void move(Character& enemy);
            void slash(Character& enemy);
            void print() override;
    };
}

#endif
