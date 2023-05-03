#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"
#include <iostream>

namespace ariel {
    class Ninja : public Character{
        private:
            int speed; 
        public:
            Ninja(std::string name, Point& location, int hit_point, int speed);
            ~Ninja() = default; 

            virtual void move(const Character* enemy);
            virtual void slash(const Character* enemy);

            /* Returns true if the character has more than 0 hit points, and false otherwise*/
            bool isAlive() const override;
            /*Calculates the distance between this character and another character.*/
            double distance(const Character& other) const override;
            /* Decreases the character's hit points by the given number.*/
            void hit(int num) override;
            /*Returns the character's name*/
            std::string getName() const override;
            /*Returns the character's current location.*/
            Point getLocation() const override;
            /*Prints the character's name and location to the console.*/
            void print() override;

            friend std::ostream& operator<<(std::ostream& ostream, const Ninja& ninja); //TODO: check if really need (not work without)

    };
}

#endif
