#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>
#include "./../test.hpp"

static char buf[512];

static void *aligned(void *p)
{
	return (void*)(((uintptr_t)p + 63) & -64);
}

static void *aligncpy(void *p, size_t len, size_t a)
{
	return memcpy((char*)aligned(buf)+a, p, len);
}

#define N(s, c) { \
    void *r = (void*) s; \
	int align; \
	for (align=0; align<8; align++) { \
		char *p = (char*) aligncpy(r, sizeof r, align); \
		char *q = ft_strchr(p, c); \
		if (q) \
			t_error("strchr(%s,%s) with align=%d returned str+%d, wanted 0\n", r, c, align, q-p); \
	} \
}

#define T(s, c, n) { \
    void *r = (void*) s; \
	int align; \
	for (align=0; align<8; align++) { \
		char *p = (char*) aligncpy(r, sizeof r, align); \
		char *q = ft_strchr(p, c); \
		if (q == 0) \
			t_error("strchr(%s,%s) with align=%d returned 0, wanted str+%d\n", r, c, align, n); \
		else if (q - p != n) \
			t_error("strchr(%s,%s) with align=%d returned str+%d, wanted str+%d\n", r, c, align, q-p, n); \
	} \
}

TEST_CASE( "ft_strchr") {
	int i;
	char a[128];
	char s[256];

	for (i = 0; i < 128; i++)
		a[i] = (i+1) & 127;
	for (i = 0; i < 256; i++)
		*((unsigned char*)s+i) = i+1;

	N("\0aaa", 'a')
	N("a\0bb", 'b')
	N("ab\0c", 'c')
	N("abc\0d", 'd')
	N("abc abc\0x", 'x')
	N(a, 128)
	N(a, 255)
	T("", 0, 0)
	T("a", 'a', 0)
	T("a", 'a'+256, 0)
	T("a", 0, 1)
	T("abb", 'b', 1)
	T("aabb", 'b', 2)
	T("aaabb", 'b', 3)
	T("aaaabb", 'b', 4)
	T("aaaaabb", 'b', 5)
	T("aaaaaabb", 'b', 6)
	T("abc abc", 'c', 2)
	T(s, 1, 0)
	T(s, 2, 1)
    REQUIRE (t_status == 0);
    t_status = 0;
}
