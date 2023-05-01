#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "Point.hpp"
#include <iostream>
using namespace std;

namespace ariel {
    // This class represents a character in a game world. 
    class Character {
        private:
            // The character's location in the game world.
            Point location;
            // The character's current hit points.
            int hit_point;
            // The character's name.
            string name;

        public:
            /* Constructor for creating a new character with the given name, location, and hit points.*/
            Character(string name, Point location, int hit_point); 
            /* Returns true if the character has more than 0 hit points, and false otherwise*/
            bool isAlive();
            /*Calculates the distance between this character and another character.*/
            double distance(Character& other);
            /* Decreases the character's hit points by the given number.*/
            void hit(int num);
            /*Returns the character's name*/
            string getName();
            /*Returns the character's current location.*/
            Point getLocation();
            /*Prints the character's name and location to the console.*/
            virtul void print();
    };
}

#endif
