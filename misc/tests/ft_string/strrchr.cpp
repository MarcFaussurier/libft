#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"

TEST_CASE( "ft_strrchr") {
  	char abccd[] = "abccd";
	char abcde[] = "abcde";
   	REQUIRE (ft_strrchr( abcde, '\0' ) == &abcde[5] );
    REQUIRE (ft_strrchr( abcde, 'e' ) == &abcde[4] );
    REQUIRE (ft_strrchr( abcde, 'a' ) == &abcde[0] );
    REQUIRE (ft_strrchr( abccd, 'c' ) == &abccd[3] );
	REQUIRE (ft_strrchr("\0d", 'd') == NULL);
}