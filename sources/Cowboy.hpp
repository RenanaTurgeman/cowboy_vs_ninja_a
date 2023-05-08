#ifndef COWBOY_HPP
#define COWBOY_HPP

#include "Character.hpp"
#include <iostream>
/*Cowboy has 6 bullets and 11 hit points*/

namespace ariel {
    class Cowboy : public Character{
        private:
            int bullet = 6; //amount
        public:
            Cowboy(std::string name, Point& location);
            ~Cowboy()= default;
            void shoot(Character* enemy);
            bool hasboolets() const;
            void reload();

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
            string print() override;

        friend std::ostream& operator<<(std::ostream& ostream, const Cowboy& cowboy); //TODO: check if really need (not work without)

    };
}

#endif
