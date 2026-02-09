#include <catch2/catch_test_macros.hpp>
#include <iostream>

TEST_CASE("My first test with Catch2", "[fancy]")
{
    REQUIRE(0 == 0);
    std::cout << "Hello\n";
}
