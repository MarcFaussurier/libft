#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_itoa") {
    char    *tmp;
    REQUIRE(strcmp(tmp = ft_itoa(-2147483648),"-2147483648") == 0);
    free(tmp);

    REQUIRE(strcmp(tmp = ft_itoa(2147483647),"2147483647") == 0);
    free(tmp);

    REQUIRE(strcmp(tmp = ft_itoa(47483648),"47483648") == 0);
    free(tmp);

}

