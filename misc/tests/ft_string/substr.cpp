#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE("ft_substr10") {
    char s1[] = "hello world";
    int n = 6;

    char *o = ft_substr(s1, 6, 6);
    REQUIRE(o != &s1[n]);
    REQUIRE(strcmp(o,"world") == 0);
}


TEST_CASE("ft_substr2") {
    char s1[] = "hello world";
    int n = 6;

    char *o = ft_substr(s1, 6, 4);
    REQUIRE(o != &s1[n]);
    REQUIRE(strcmp(o,"worl") == 0);
}

TEST_CASE("ft_substr3") {
    char s1[] = "hello world";
    int n = 6;

    char *o = ft_substr(s1, 6, 5);
    REQUIRE(o != &s1[n]);
    REQUIRE(strcmp(o,"world") == 0);
}
