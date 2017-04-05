#include "Fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

int fibo (int n)
{

  if (n>2)
    return fibo(n-1) + fibo(n-2);
  else if (n==2)
    return 1;
  else if (n==1)       
    return 1;
  else if (n==0)
    return 0;
}

