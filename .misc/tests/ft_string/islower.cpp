#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"

TEST_CASE( "ft_islower")
{
	REQUIRE (ft_islower('`') == 0);	
	REQUIRE (ft_islower('a') == 1);
	REQUIRE (ft_islower('z') == 1);
	REQUIRE (ft_islower('{') == 0);
}