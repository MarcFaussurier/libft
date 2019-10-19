#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isprint") {
	REQUIRE (ft_isprint(30) == 0);
	REQUIRE (ft_isprint(31) == 0);
    REQUIRE (ft_isprint(127) == 0);
    REQUIRE (ft_isprint('~') == 1);
    REQUIRE (ft_isprint(' ') == 1);
}