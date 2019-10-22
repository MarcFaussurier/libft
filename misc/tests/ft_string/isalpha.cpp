#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_isalpha") {
	REQUIRE (ft_isalpha('H') == 1);
	REQUIRE (ft_isalpha('Z') == 1);
	REQUIRE (ft_isalpha('z') == 1);
    REQUIRE (ft_isalpha('{') == 0);
}