#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE("ft_strjoin") {
    char s1[] = "hello ";
    char s2[] = "world";
    REQUIRE(strcmp(ft_strjoin(s1, s2),"hello world") == 0);
}
