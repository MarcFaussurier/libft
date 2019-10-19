#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_toupper")
{
	REQUIRE (ft_toupper('`') == '`');	
	REQUIRE (ft_toupper('a') == 'A');
	REQUIRE (ft_toupper('z') == 'Z');
	REQUIRE (ft_toupper('~') == '~');
}