#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"

TEST_CASE( "ft_isupper")
{
	REQUIRE (ft_isupper('@') == 0);	
	REQUIRE (ft_isupper('A') == 1);
	REQUIRE (ft_isupper('Z') == 1);
	REQUIRE (ft_isupper('[') == 0);
}