#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    class Cowboy : public Character{
        private:
            int bullet = 6; //amount
        public:
            Cowboy(string name, Point& location);
            ~Cowboy()= default;
            void shoot(Character& enemy);
            bool hasboolets() const;
            void reload();
            void print() override;
    };
}

#endif
