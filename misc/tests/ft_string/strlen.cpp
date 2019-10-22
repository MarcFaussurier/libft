#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"

TEST_CASE( "ft_strlen") {
    REQUIRE( ft_strlen("") == 0 );
    REQUIRE( ft_strlen("a\0") == 1 );
    REQUIRE( ft_strlen("\0") == 0 );
    REQUIRE( ft_strlen("avion") == 5 );
}
