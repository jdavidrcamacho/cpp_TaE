/* log example */
#include <stdio.h>      /* printf */
#include <math.h>       /* log */

int main ()
{
  double param, result, cenas;
  param = 5.5;
  result = log (param);
  cenas = M_PI;
  printf ("log(%f) = %f =! %f\n", param, result, cenas );
  return 0;
}
