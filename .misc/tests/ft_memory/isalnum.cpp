#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isalnum") {
	REQUIRE (ft_isalnum('H') == 1);
	REQUIRE (ft_isalnum('Z') == 1);
	REQUIRE (ft_isalnum('z') == 1);
    REQUIRE (ft_isalnum('{') == 0);
	REQUIRE (ft_isalnum('0') == 1);
	REQUIRE (ft_isalnum('9') == 1);
    REQUIRE (ft_isalnum('/') == 0);
    REQUIRE (ft_isalnum(':') == 0);
}