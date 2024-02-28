#include<stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    swap(&num1,&num2);
    printf("after swapping the num1 is : %d and the num 2 is : %d",num1,num2);
}