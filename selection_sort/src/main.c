#include <stdio.h>
#include "sort.h"

int
main(void)
{
  int a[] = {3, 1, 17 , 12, 13, 5};
  sort(a, 6);
  printf("The value of a[2] is %d\n", a[2]);

  return 0;
}
