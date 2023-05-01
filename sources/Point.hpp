#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>

namespace ariel {
    // This class represents a point 
    class Point {
    private:
        double x; // The x-coordinate of the point.
        double y; // The y-coordinate of the point.
    
    public:
        /*Constructor for creating a new point with the given x and y coordinates.*/
        Point(double x, double y);
        
        /*Calculates the Euclidean distance between this point and another point.
          The other point is passed as a parameter.*/
        double distance(Point other);
        
        /* Prints the coordinates of the given point to the console.*/
        void print(Point point);
        
        /*The function returns the closest point to the destination point, - which is at most the given distance from the source point*/
        Point moveTowards(Point source, Point destination, double distance);
    };
}

#endif
