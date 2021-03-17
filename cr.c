#include<stdio.h>

int cr(int *a, int *b);

int main()
{
    int a,b;

    printf("Swapping of number using call by Reference \n");

    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",&b);

    printf("\nValues Before Swapping a=%d and b=%d \n",a,b);

    cr(&a,&b);

    printf("\nValues After SWapping a=%d and b=%d \n\n",a,b);

    return 0;
}
int cr(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
