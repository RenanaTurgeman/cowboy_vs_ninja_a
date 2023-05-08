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

TEST_SUITE("Test Cowboy Class") {

        Point location(0, 0);
        Cowboy cowboy("cowboy", location);

        TEST_CASE("Test constructor and getters") {
            CHECK(cowboy.getName() == "cowboy");
            CHECK(cowboy.getLocation().distance(location) == 0);
            CHECK(cowboy.isAlive() == true);
            CHECK(cowboy.hasboolets() == true);
        }

        TEST_CASE("Test shooting and reloading") {
            Point enemy_location(3, 4);
            Cowboy enemy("Tom", enemy_location);

            cowboy.shoot(&enemy);
            CHECK(enemy.isAlive() == true);
            CHECK(cowboy.hasboolets() == false);

            cowboy.reload();
            CHECK(cowboy.hasboolets() == true);

            cowboy.shoot(&enemy);
            cowboy.shoot(&enemy);
            cowboy.shoot(&enemy);
            CHECK(enemy.isAlive() == false);
            CHECK(cowboy.hasboolets() == true);
        }

        TEST_CASE("Test hit points") {
            cowboy.hit(3);
            CHECK(cowboy.isAlive() == true);

            cowboy.hit(8);
            CHECK(cowboy.isAlive() == false);
        }
}//suit character

TEST_SUITE("Test Ninja class and subclass"){
    Point location1(0, 0);
    Ninja ninja("Bob", location1, 100, 10);
    Point location2(3, 3);
    OldNinja old("Alice", location2 );
    Point location3(0, 3);
    TrainedNinja trained("Billy", location3 );
    Point location4(3, 0);
    TrainedNinja young("Ron", location4 );

    TEST_CASE("constructors doesnt throw errors"){
        CHECK_NOTHROW(Ninja("Bob", location1, 100, 10));
        CHECK_NOTHROW(OldNinja("Alice", location2));
        CHECK_NOTHROW(TrainedNinja("Alice", location3));
    }
    TEST_CASE("Distance function between classes") {
        CHECK((ninja.distance(trained) == 3));
        CHECK((old.distance(trained) == 3));
        CHECK((young.distance(old) == 3));
    }

    TEST_CASE("Class functions") {
        // young Ninja has 100 hit points
        young.hit(90);
        CHECK((young.isAlive() == true));
        young.hit(10);
        CHECK((young.isAlive() == false));

        // trained Ninja has 120 hit points
        trained.hit(100);
        CHECK((trained.isAlive() == true));
        trained.hit(20); // trained ninja stay with no hit points
        CHECK((trained.isAlive() == false));

        // old ninja has 150 hit points
        old.hit(50);
        CHECK((old.isAlive() == true));
        old.hit(100);
        CHECK((old.isAlive() == false));
    }
}//suit ninja
