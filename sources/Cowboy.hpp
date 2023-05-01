#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    class Cowboy : public Character{
        private:
            int bullet; //amount
        public:
            void shoot(Character& enemy);
            bool hasboolets() const;
            void reload();
            void print() override;

    };
}

#endif
