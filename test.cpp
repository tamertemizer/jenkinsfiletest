#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "lib/catch.hpp"
#include "dummy_class.cpp"

TEST_CASE("Multiplications are computed", "[t_multiply]") {
	REQUIRE(multiply(1, 2) == 2);
	REQUIRE(multiply(-1, 3) == -3);
	REQUIRE(multiply(0, 5) == 0);
	REQUIRE(multiply(-1, -4) == 4);
}

TEST_CASE("Additions are computed", "[t_addition]") {
	REQUIRE(addition(1, 2) == 3);
	REQUIRE(addition(-1, 1) == 0);
	REQUIRE(addition(-3, -5) == -8);
	REQUIRE(addition(10, 10) == 15);
}