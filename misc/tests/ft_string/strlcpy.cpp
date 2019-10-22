#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>


TEST_CASE( "ft_strlcpy") {
    char b[32];
    
    memset(b, 'x', sizeof b);
	REQUIRE(ft_strlcpy(b, "abc", sizeof b - 1) == 3);
	REQUIRE(b[3] == 0);
    REQUIRE(b[4] == 'x');//, "strlcpy wrote extra bytes (%d)");
	memset(b, 'x', sizeof b);
	REQUIRE(ft_strlcpy(b, "abc", 2) == 3);//, "length %d != %d");
	REQUIRE(b[0] == 'a');//, "strlcpy did not copy character %d");
	REQUIRE(b[1] == 0);//, "strlcpy did not null-terminate long string (%d)");
	memset(b, 'x', sizeof b);
	REQUIRE(ft_strlcpy(b, "abc", 3) == 3);//, "length %d != %d");
	REQUIRE(b[2] == 0);//, "strlcpy did not null-terminate l-length string (%d)");
	REQUIRE(ft_strlcpy(NULL, "abc", 0) == 3);//, "length %d != %d");
}