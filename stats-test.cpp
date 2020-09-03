#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "stats.h"
TEST_CASE("reports average, minimum and maximum of int with average is whole number") {
    std::vector<int> vect{ 1, 8, 3, 4 };
    auto computedStats = Statistics::ComputeStatistics(vect);
    
    std::cout << computedStats.average << std::endl;
    REQUIRE(computedStats.average==4);
    REQUIRE(computedStats.max==8);
    REQUIRE(computedStats.min==1);
}
TEST_CASE("reports average, minimum and maximum of int with average is fraction") {
    std::vector<int> vect{ 1, 9, 3, 4 };
    auto computedStats = Statistics::ComputeStatistics(vect);

    REQUIRE(computedStats.average == 4.25);
    REQUIRE(computedStats.max == 9);
    REQUIRE(computedStats.min == 1);
}
TEST_CASE("reports average, minimum and maximum of float") {
    std::vector<float> vect{ 1.5f, 8.9f, 3.2f, 4.5f };
    auto computedStats = Statistics::ComputeStatistics(vect);
    float epsilon = 0.001f;
    REQUIRE(std::abs(computedStats.average - 4.525) < epsilon);
    REQUIRE(std::abs(computedStats.max - 8.9) < epsilon);
    REQUIRE(std::abs(computedStats.min - 1.5) < epsilon);
}
TEST_CASE("reports average, minimum and maximum of double") {
    std::vector<double> vect{1.5, 8.9, 3.2, 4.5};
    auto computedStats = Statistics::ComputeStatistics(vect);
    double epsilon = 0.001;
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