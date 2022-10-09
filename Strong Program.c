
#include <stdio.h>

int
main ()
{
  int n, r, i, fact, temp, sum = 0;
  printf ("Enter a number:");
  scanf ("%d", &n);
  temp = n;

  while (n > 0)
    {
      r = n % 10;
      fact = 1;
      for (i = r; i >= 1; i--)
	{
	  fact = fact * i;
	}
      sum = sum + fact;
      n = n / 10;
    }
  n = temp;
  if (n == sum)
    {
      printf ("Strong Number");
    }
  else
    {
      printf ("Not a strong number");
    }

  return 0;
}
