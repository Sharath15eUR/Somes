#include <stdio.h>

int main() 
{
    int num;
    scanf("%d",&num);
    int count = 0;

    while (num)
    {
        count += num & 1;
        num = num >> 1;
    }

    printf("Original number has %d set bits", count);
    return 0;
}
