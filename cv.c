#include<stdio.h>

int cv(int a, int b);

int main()
{
    int a,b;

    printf("Swapping of number using call by value\n");

    printf("Enter num1: ");
    scanf("%d",&a);

    printf("Enter num2: ");
    scanf("%d",&b);

    printf("\nValues Before Swapping a=%d and b=%d \n",a,b);

    cv(a,b);
    
    return 0;
}

int cv(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\nValues After Swapping a=%d and b=%d \n\n",a,b);
    return 0;
}






