#include <stdio.h>
#include <float.h>

/* function declaration */
double halfPi(double param);

int main () {

   /* local variable definition */
   double ans;

   /* calling a function to get pi value */
   ans = 2.0 * halfPi(1);
   /* ans = 2 * halfPi(1); */

   printf( "pi is : %.50f\n", ans );

   return 0;
}

/* get half of pi recursively, may take longer due to pushing onto stack */
double halfPi(double i) {
  static int count=1;
  count++;
  printf("halfPi called %d times\n", count);
  if (count > 174657)
    return i;
  else
    return 1 + i / (2.0 * i + 1) * halfPi(i + 1);
}
