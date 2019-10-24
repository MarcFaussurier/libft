#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_strdup")
{
    char string[] = "hello world";
    char *copy = ft_strdup(string);
    REQUIRE(copy);
    REQUIRE(0 == strcmp(string, copy));
    REQUIRE(11 == strlen(copy));
    free(copy);
}
