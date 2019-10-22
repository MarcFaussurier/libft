#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

TEST_CASE( "ft_strncmp") {
  char		*string = strdup("");
  REQUIRE(0 == ft_strncmp(string, string, 1000));
  free(string);
  char		*string1 = strdup("stringA");
  char		*string2 = strdup("stringZ");
  REQUIRE(-25 == ft_strncmp(string1, string2, -666));
  free(string1);
  string1 = strdup("does it work ?");
  free(string2);
  string2 = strdup("seems like it does");
  REQUIRE(-15 == ft_strncmp(string1, string2, -1));
  string1 = strdup("a");
  string2 = strdup("a");
  REQUIRE(0 == ft_strncmp(string1, string2, 1));
  free(string1);
  string1 = strdup("ç");
  free(string2);
  string2 = strdup("ç");
  REQUIRE(0 == strncmp(string1, string2, 4));
  free(string1);string1 = strdup("z");
  REQUIRE(-73 == strncmp(string1, string2, 666));
  REQUIRE(-73 == strncmp(string1, string2, 1));
  REQUIRE(0 == strncmp(string1, string2, 0));
  
  string1 = strdup("stringA");
  string2 = strdup("stringZ");
  REQUIRE(0 == ft_strncmp(string1, string2, 3));
  free(string2);
  string2 = strdup("stRingA");
  REQUIRE(32 == ft_strncmp(string1, string2, 5));
  free(string1);
  string1 = strdup("stRingZ");
  REQUIRE(25 == ft_strncmp(string1, string2, 666));
  string1 = strdup("string");
  string2 = strdup("stringA");
  REQUIRE(-65 == ft_strncmp(string1, string2, 666));
  free(string1);
  string1 = strdup("hello");
  REQUIRE(-11 == ft_strncmp(string1, string2, 2));
  free(string1);
  string1 = strdup("sz");
  free(string2);
  string2 = strdup("sz\0");
  REQUIRE(0 == ft_strncmp(string1, string2, 1));
  string1 = strdup("stringA");
  string2 = strdup("string");
  REQUIRE(65 == ft_strncmp(string1, string2, 666));
  free(string1);
  string1 = strdup("hello there");
  free(string2);
  string2 = strdup("wow");
  REQUIRE(-15 == ft_strncmp(string1, string2, 4));
  free(string2);
  string2 = strdup("hey there");
  REQUIRE(-13 == ft_strncmp(string1, string2, 8));
}
