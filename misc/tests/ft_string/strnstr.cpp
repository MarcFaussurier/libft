#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_strnstr") {
	const char *large = "foo bar baz";
	const char *small = "bar";

	REQUIRE(ft_strnstr(large, "", strlen(large)) == large);

	REQUIRE(ft_strnstr(large, "quux", strlen(large)) == NULL);

	REQUIRE(ft_strnstr(large, small, 4) == NULL);

	REQUIRE(ft_strnstr(large, small, strlen(large)) == (large + 4));
}