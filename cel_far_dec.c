#include <stdio.h>

int main()
{
   int cel = 300;
   float far;

   while (cel >= 0) {
      far = (9.0/5.0) * cel + 32;
      printf("%d %f\n", cel, far);
      cel = cel - 10;
   }
   return 0;
} 
