#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include "./../test.hpp"

#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

TEST_CASE( "ft_memccpy") {
	char tmemccpy[2][7]  =  { "abcde", "abcdef" };
	void *re;
	memccpy(tmemccpy[0], "12345", 33, 3);
	REQUIRE (strcmp(tmemccpy[0], "123de") == 0); 
	re = ft_memccpy(tmemccpy[1], "12345", 51, 5);	
	REQUIRE (strcmp(tmemccpy[1], "123def") == 0); 
	REQUIRE (strcmp((const char *) re, "d"));
};
