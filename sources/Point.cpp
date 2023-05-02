#include "Point.hpp"

using namespace ariel;
using namespace std;
Point::Point() : x_coor(0.0), y_coor(0.0) {

}

Point::Point(double x_coor, double y_coor): x_coor(x_coor), y_coor(y_coor){

}

double Point::distance(const Point& other) const{
    return 0;
}

void Point::print() const{

}

Point Point::moveTowards(Point& source, Point& destination, double distance) const{
    return Point(1,1);
}