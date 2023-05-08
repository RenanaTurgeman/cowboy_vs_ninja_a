#include "sources/Team.hpp"
#include "doctest.h"

using namespace std;
using namespace ariel;

TEST_SUITE("Test Point Class") {

    TEST_CASE("Test default constructor") {
        //defulat constructor should return the point (0,0)
        Point p;
        CHECK((p.distance(Point(0, 0)) == 0));
    }

    TEST_CASE("Test constructor using distance") {
        Point p1(1, 2);
        Point p2(3.14, -2.5);
        Point p3(-10, 5);

        CHECK((p1.distance(Point(0, 0)) == 2.236));
        CHECK((p2.distance(Point(0, 0)) == 4.371)); //TODO: check again
        CHECK((p3.distance(Point(0, 0)) == 11.180));
    }

    TEST_CASE("Test distance between points") {
        Point p1(0, 0);
        Point p2(3, 4);
        Point p3(-1, -1);
        Point p4(1.5, 2.5);

        CHECK((p1.distance(p2) == 5));
        CHECK((p2.distance(p3) == 6.403));
        CHECK((p3.distance(p4) == 4.301));
    }

    TEST_CASE("Test distance between identical points") {
        Point p1(2, 3);
        Point p2(2, 3);

        CHECK((p1.distance(p2) == 0));
    }

    TEST_CASE("Test moveTowards function") { //TODO: check if I understand this function correct
        Point p1(0, 0);
        Point p2(3, 4);
        Point p3(-1, -1);
        Point p4(1.5, 2.5);

        CHECK((p1.moveTowards(p1, p2, 3).distance(p2) == 2));
        CHECK((p2.moveTowards(p2, p3, 2).distance(p3) == 2));
        CHECK((p3.moveTowards(p3, p1, 1).distance(p1) == 1.414));
        CHECK((p4.moveTowards(p4, p1, 0.5).distance(p1) == 0.5));
    }

} // end of test suite

TEST_SUITE("Test Character Class") {

    TEST_CASE("Character default constructor creates a valid object") {
        Point location{1, 1};
        Character c{"Bob", location, 10};
        CHECK(c.getName() == "Bob");
        CHECK(c.getLocation().distance(location) == 0);
        CHECK(c.isAlive()== true);
    }

    TEST_CASE("Character distance calculation is correct") {
        Point location1{1, 1};
        Point location2{4, 5};
        Character c1{"Bob", location1, 10};
        Character c2{"Alice", location2, 10};
        double expected_distance = location1.distance(location2);
        CHECK(c1.distance(c2) == expected_distance);
    }

    TEST_CASE("Character hit points can be decreased") {
        Point location{1, 1};
        Character c{"Bob", location, 10};
        int num_hits = 3;
        c.hit(num_hits);
        CHECK(c.isAlive()== true);
        CHECK(c.getName() == "Bob");
        CHECK(c.getLocation().distance(location) == 0);
        CHECK(c.isAlive()== true);
//        CHECK(c.getHitPoints() == 10 - num_hits);
    }

    TEST_CASE("Character hit points reach zero when hit enough times") {
        Point location{1, 1};
        Character c{"Bob", location, 2};
        int num_hits = 3;
        c.hit(num_hits);
        CHECK(c.isAlive()== false);
    }

}// end suit character