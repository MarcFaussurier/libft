#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_memchr") {
	char tmemchr[] = "www.test.com";
	char *ret = (char*) ft_memchr(tmemchr, '.', ft_strlen(tmemchr));
	REQUIRE (strcmp(ret, ".test.com") == 0);
}