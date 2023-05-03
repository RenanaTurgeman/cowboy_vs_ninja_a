#ifndef OLD_NINJA_HPP
#define OLD_NINJA_HPP

#include "Ninja.hpp"
#include <iostream>

namespace ariel {
    class OldNinja : public Ninja{
        private:
        public:
            OldNinja(std::string name, Point location);
            
            void move(const Character* enemy) override;
            void slash(const Character* enemy) override;

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
            friend std::ostream& operator<<(std::ostream& ostream, const OldNinja& oldNinja); //TODO: check if really need (not work without)

    };
}

#endif
