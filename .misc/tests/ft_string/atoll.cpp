#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

static void CheckAtoi (const char* Str, int Val)
{
    int Res = ft_atoll (Str);
    REQUIRE (Res == Val);
}

TEST_CASE( "ft_atoll") {
    CheckAtoi ("\t +0A", 0);
    CheckAtoi ("\t -0.123", 0);
    CheckAtoi ("  -32  ", -32);
     CheckAtoi ("  --32  ", 0);
    CheckAtoi (" +32  ", 32);
    CheckAtoi ("0377", 377);
    CheckAtoi (" 0377 ", 377);
    CheckAtoi (" +0377 ", 377);
    CheckAtoi (" -0377 ", -377);
    CheckAtoi ("0x7FFF", 0);
    CheckAtoi (" +0x7FFF", 0);
    CheckAtoi (" -0x7FFF", 0);
}