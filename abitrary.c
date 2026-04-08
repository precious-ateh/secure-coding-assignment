#include <stdio.h>
int main (){
   int safe =100;
   int target = 50;
   int *ptr;
   printf("Before change:\n");
   printf("safe = %\n",safe);
   printf("target = %\n", target);
   printf("\nAfter arbitrary write:\n");
   printf("safe = %d\n", safe);
   printf("target = %d\n", target);
   return 0;
}
