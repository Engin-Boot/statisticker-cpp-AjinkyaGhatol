#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"


#include "stats.h"



TEST_CASE("reports average, minimum and maximum") {
    std::vector<float> vect{1.5, 8.9, 3.2, 4.5};
    auto computedStats = Statistics::ComputeStatistics(vect);
    float epsilon = 0.001;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}

TEST_CASE("average is NaN for empty array") {
   std::vector<float> vect{};
    auto computedStats = Statistics::ComputeStatistics(vect);
    //All fields of computedStats (average, max, min) must be
    //NAN (not-a-number), as defined in math.h
    
    //Design the REQUIRE statement here.
    //Use http://www.cplusplus.com/reference/cmath/isnan/
    REQUIRE(isnan(computedStats.average));
    REQUIRE(isnan(computedStats.max));
    REQUIRE(isnan(computedStats.min));
}
