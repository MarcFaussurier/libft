#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>
#include "./../test.hpp"


TEST_CASE("ft_split")
{
    char s1[] = "hello world world";
    char    s = ' ';

    char    **o = ft_split(s1, s);

    (void)o;
    REQUIRE(strcmp(o[0],"hello") == 0);
    REQUIRE(strcmp(o[0],"hello") == 0);
    REQUIRE(strcmp(o[1], "world") == 0);
    REQUIRE(strcmp(o[2], "world") == 0);
    REQUIRE(o[3] == 0);
    char s2[] = "";
    o = ft_split(s2, s);
    REQUIRE(o[0] == NULL);
}
