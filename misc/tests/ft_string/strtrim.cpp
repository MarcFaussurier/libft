#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE("ft_strtrim") {
    char s1[] = "";
    char s2[] = "";
    REQUIRE(strcmp(ft_strtrim(s1,s2),"") == 0);
}
