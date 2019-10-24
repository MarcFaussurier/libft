#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>

char    f(unsigned int i, char c)
{
    (void)i;
    (void)c;

    return 'a';
}

TEST_CASE( "ft_strmapi") {
    char    const *t = "hello world";
    char    *out;

    out = ft_strmapi(t,f);
    REQUIRE(strcmp(out,"aaaaaaaaaaa") == 0);
    free(out);
}
