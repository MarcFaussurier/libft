#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isascii")
{
	REQUIRE (ft_isascii(-1) == 0);	
	REQUIRE (ft_isascii(0) == 1);
	REQUIRE (ft_isascii(0) == 1);
	REQUIRE (ft_isascii(127) == 1);
	REQUIRE (ft_isascii(128) == 0);
    REQUIRE (ft_isascii(148) == 0);
}