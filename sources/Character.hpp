#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    // This class represents a character in a game world. 
    class Character {
        // protected:
        private:
            // The character's location in the game world.
            Point location;
            // The character's name.
            string name;
            // The character's current hit points.
            int hit_point;

        public:
            /* Constructor for creating a new character with the given name, location, and hit points.*/
            Character(string name, Point& location, int hit_point);
            ~Character() = default; 
            /* Returns true if the character has more than 0 hit points, and false otherwise*/
            bool isAlive() const;
            /*Calculates the distance between this character and another character.*/
            double distance(const Character& other) const;
            /* Decreases the character's hit points by the given number.*/
            void hit(int num);
            /*Returns the character's name*/
            string getName() const;
            /*Returns the character's current location.*/
            Point getLocation() const;
            /*Prints the character's name and location to the console.*/
            virtual void print();
    };
}

#endif
