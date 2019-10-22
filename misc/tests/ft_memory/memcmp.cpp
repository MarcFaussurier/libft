#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_memcmp") {
	int greater, lessthan, equal, greater2, lessthan2, equal2;
	greater = ft_memcmp("abcd", "abc", 4);
	greater2 = memcmp("abcd", "abc", 4);
    lessthan = ft_memcmp("abc", "abcd", 4);
	lessthan2 = memcmp("abc", "abcd", 4);
    equal = ft_memcmp("abc", "abc", 3);
    equal2 = memcmp("abc", "abc", 3);
    REQUIRE ((greater > 0)  == (greater2 > 0));
    REQUIRE ((lessthan < 0) == (lessthan2 < 0));
	REQUIRE ((equal == 0) == (equal2 == 0));
}
