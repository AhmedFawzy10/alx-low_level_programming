#include <stdio.h>
#include "main.h"

int main() {

  int n;
  int r;

  n = -1;
  r = _abs(n);
  printf("%d\n", r);

  return 0;
}

int _abs(int n)
{
  if (n >= 0)
 {
    return (n);
  }
  else
  {
    return (-n);
  }
}
