#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>


TEST_CASE( "ft_strlcat") {
    char b[32];
   	
	memcpy(b, "abc\0\0\0x\0", 8);
	REQUIRE(ft_strlcat(b, "123", sizeof b) == 6);//, "length %d != %d");
	REQUIRE(b[5] == '3');//, "strlcat result");

	memcpy(b, "abc\0\0\0x\0", 8);
	REQUIRE(ft_strlcat(b, "123", 6) == 6);//, "length %d != %d");
	REQUIRE(b[4] == '2');//, "strlcat result");
	REQUIRE(b[6] == 'x');//, "strlcat wrote past string %d != %d");

	memcpy(b, "abc\0\0\0x\0", 8);
	REQUIRE(ft_strlcat(b, "123", 4) == 6);//, "length %d != %d");
	REQUIRE(b[2] == 'c');//, "strlcat result");

	memcpy(b, "abc\0\0\0x\0", 8);
	REQUIRE(ft_strlcat(b, "123", 3) == 6);//, "length %d != %d");
	REQUIRE(b[2] == 'c');//, "strlcat result"); 
}