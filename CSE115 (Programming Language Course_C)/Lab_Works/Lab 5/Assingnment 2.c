#include <stdio.h>

void main()

{

  int a, b, c, i, n;

  a = 0;
  b = 1;

  printf("Enter N: ");
  scanf("%d", &n);
  printf("\nThe Fibonacci Series is: \n");
  printf("%d\t%d", a, b);

  for (i = 0; i < n; i++)

  {

    c = a + b;

    a = b;

    b = c;

    printf("\t%d", c);

  }

  return 0;

}
