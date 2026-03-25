#include <stdio.h>

int multiply(int a, int b)
{
  
}

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int num1, num2;

    printf("Enter first numbers:\n ");
    scanf("%d", &num1);
    printf("Enter second numbers:\n ");
    scanf("%d",&num2);

    printf("Cube of multiplication is:\n %d\n", cube(multiply(num1, num2)));

    return 0;
}