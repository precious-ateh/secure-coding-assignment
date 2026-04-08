#include <stdio.h>
#include <string.h>
int main() {
 char name[10];
 int safe =1;
 printf("Enter your name:");
 fgets(name, sizeof(name), stdin);
 printf("\nYou entered: %S", name);
 printf("safe value =%d\n", safe);
 return 0;
}
