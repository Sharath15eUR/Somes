#include <stdio.h>

int main() 
{
   int num;
   scanf("%d",&num);
   if(num & 1)
    printf("%d is a odd number.",num);
   else
    printf("%d is a even number.",num);

    return 0;
}