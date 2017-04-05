
#include <stdio.h>
#include <stdlib.h>
#include "Fibonacci.h"

int main(void) {

  int num;
printf ("Ingresa el numero ");
scanf ("%d" , &num);

    for (int i= 0;i<=num; num++)
    {
      printf("%d\n", fibo(num));

    }
 
  system("PAUSE");     
  return 0;

}
