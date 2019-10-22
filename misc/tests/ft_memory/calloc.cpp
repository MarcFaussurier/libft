#include "./../../ft.hpp"
#include "./../../deps/catch2/single_include/catch2/catch.hpp"
#include <string.h>


/* Number of samples per size.  */
#define N 500


static void
fixed_test (int size)
{
  char *ptrs[N];
  int i;

  for (i = 0; i < N; ++i)
    {
      int j;

      ptrs[i] = (char *) ft_calloc (1, size);

      if (ptrs[i] == NULL)
	break;

      for (j = 0; j < size; ++j)
	{
	  REQUIRE (ptrs[i][j] == '\0');
	  ptrs[i][j] = '\xff';
	}
    }

  while (i-- > 0)
    free (ptrs[i]);
}


static void
random_test (void)
{
  char *ptrs[N];
  int i;

  for (i = 0; i < N; ++i)
    {
      int j;
      int n = 1 + random () % 10;
      int elem = 1 + random () % 100;
      int size = n * elem;

      ptrs[i] = (char *) ft_calloc (n, elem);

      if (ptrs[i] == NULL)
	break;

      for (j = 0; j < size; ++j)
	{
	  REQUIRE (ptrs[i][j] == '\0');
	  ptrs[i][j] = '\xff';
	}
    }

  while (i-- > 0)
    free (ptrs[i]);
}


static void
null_test (void)
{
  ft_calloc (0, 0);
  ft_calloc (0, ~((size_t) 0));
  ft_calloc (~((size_t) 0), 0);
}

TEST_CASE( "ft_calloc") {
  fixed_test (15);
  fixed_test (5);
  fixed_test (17);
  fixed_test (6);
  fixed_test (31);
  fixed_test (96);
  random_test ();
  null_test ();
}