#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include "./../test.hpp"
#define N 400

static char buf[N];
static void (*bzero)(void *, size_t);

static void test_value()
{
	int i;

	bzero(buf, 10);
	for (i = 0; i < 10; i++)
		if ((unsigned char)buf[i] != '\0') {
			t_error("bzero(%d) failed: got %d\n", 0, buf[i]);
			break;
		}
}

TEST_CASE( "ft_bzero") {
	bzero = ft_bzero;
	test_value();
    REQUIRE( t_status == 0 ); 
	t_status = 0;
}
