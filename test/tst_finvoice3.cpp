#include <catch2/catch_test_macros.hpp>
#include <iostream>

#include "../lib/finvoice3.h"

TEST_CASE("My first test with Catch2", "[fancy]")
{
    REQUIRE(0 == 0);
    Finvoice3 finvoice;
    std::cout << "Hello\n";
}
