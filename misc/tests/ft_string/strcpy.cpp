#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>


TEST_CASE( "ft_strcpy") {
    char    b[32];
    char    tmp[] = "";
    memset(b, 'x', sizeof b);
	REQUIRE(strcmp(ft_strcpy(b, "abc"), "abc") == 0);
	REQUIRE(b[3] == 0);
    REQUIRE(b[4] == 'x');
	REQUIRE(strcmp(ft_strcpy(tmp, "abc"),  strcpy(tmp, "abc")) == 0);//, "length %d != %d");
}
