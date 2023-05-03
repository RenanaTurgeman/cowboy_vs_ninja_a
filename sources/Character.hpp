#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"
#include <iostream>
using namespace std; //TODO : delete the std
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
            virtual bool isAlive() const;
            /*Calculates the distance between this character and another character.*/
            virtual double distance(const Character& other) const;
            /* Decreases the character's hit points by the given number.*/
            virtual void hit(int num);
            /*Returns the character's name*/
            virtual string getName() const;
            /*Returns the character's current location.*/
            virtual Point getLocation() const;
            /*Prints the character's name and location to the console.*/
            virtual void print(); //TODO: write Print
    };
}

#endif
