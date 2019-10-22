#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_tolower")
{
	REQUIRE (ft_tolower('@') == '@');	
	REQUIRE (ft_tolower('A') == 'a');
	REQUIRE (ft_tolower('Z') == 'z');
	REQUIRE (ft_tolower('[') == '[');
}