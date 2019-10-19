#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_memmove") {
	char tmemmove[] = "abcde";
	ft_memmove(tmemmove, "12345", 3);
	REQUIRE (strcmp(tmemmove, "123de") == 0);
	// TODO : CHECK FOR OVERLAPING
}