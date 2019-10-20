#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isspace") {
	REQUIRE (ft_isspace(127) == 0);
	REQUIRE (ft_isspace('~') == 0);
	REQUIRE (ft_isspace('X') == 0);
	REQUIRE (ft_isspace('x') == 0);
	REQUIRE (ft_isspace('5') == 0);
    REQUIRE (ft_isspace('\t') == 1);
	REQUIRE (ft_isspace('\v') == 1);
	REQUIRE (ft_isspace('\n') == 1);
    REQUIRE (ft_isspace(' ') == 1);
    REQUIRE (ft_isspace('\f') == 1);
}