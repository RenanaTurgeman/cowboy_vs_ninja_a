#include "sources/Team.hpp"
#include "doctest.h"

using namespace std;
using namespace ariel;

TEST_SUITE("Test Point Class"){

    TEST_CASE("Test default constructor") {
        Point p1;
        CHECK(p1.distance(Point(0, 0)) == 0);
    }

    TEST_CASE("Test Point class") {
        Point p1(0, 0);
        Point p2(3, 4);
        Point p3(-5, -12);

        SECTION("Test distance") {
            double d1 = p1.distance(p2);
            double d2 = p2.distance(p3);
            double d3 = p3.distance(p1);

            REQUIRE(d1 == 5);
            REQUIRE(d2 == 13);
            REQUIRE(d3 == 13);
        }

        // SECTION("Test moveTowards") {
        //     Point p4 = p1.moveTowards(p1, p2, 1);
        //     Point p5 = p2.moveTowards(p2, p3, 2);
        //     Point p6 = p3.moveTowards(p3, p1, 10);

        //     REQUIRE(p4.distance(p1) == Approx(1));
        //     REQUIRE(p5.distance(p2) == Approx(2));
        //     REQUIRE(p6.distance(p3) == Approx(10));
        // }
    }

    TEST_CASE("Distance between points") {
        Point p1(0, 0);
        Point p2(3, 4);
        Point p3(-1, -1);
        Point p4(1.5, 2.5);

        CHECK(p1.distance(p2) == 5); // distance between (0,0) and (3,4) is 5
        CHECK(p2.distance(p3) == 5.656854); // distance between (3,4) and (-1,-1) is sqrt(26) or approx. 5.656854
        CHECK(p3.distance(p4) == 3.535534); // distance between (-1,-1) and (1.5,2.5) is sqrt(10) or approx. 3.535534
    }


    TEST_CASE("Distance between identical points") {
        Point p1(2, 3);
        Point p2(2, 3);

        CHECK(p1.distance(p2) == 0); // distance between identical points should be 0
    }


}//test point class