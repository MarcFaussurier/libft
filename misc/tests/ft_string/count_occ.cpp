#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>
#include "./../test.hpp"


TEST_CASE("ft_count_occ")
{
    char s1[] = "hello world $$";

    char l = 'l';
    char d = 'd';
    char s = ' ';

    char s2[] = "";

    REQUIRE(ft_count_occ(s1, l) == 3);
    REQUIRE(ft_count_occ(s1, d) == 1);
    REQUIRE(ft_count_occ(s1, s) == 2);
    REQUIRE(ft_count_occ(s2, s) == 0);
}
