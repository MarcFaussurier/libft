#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE("ft_strtrim_begin") {
    char s1[] = "";
    char s2[] = "";
    REQUIRE(strcmp(ft_strtrim_begin(s1,s2),"") == 0);

    char s3[] = " \n hello world \n";
    char s4[] = " \n";
    REQUIRE(strcmp(ft_strtrim_begin(s3,s4), "hello world \n") == 0);
}
