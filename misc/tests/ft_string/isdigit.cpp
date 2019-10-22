#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isdigit") {
	REQUIRE (ft_isdigit('0') == 1);
	REQUIRE (ft_isdigit('9') == 1);
    REQUIRE (ft_isdigit('/') == 0);
    REQUIRE (ft_isdigit(':') == 0);
}