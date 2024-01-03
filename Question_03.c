#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int (*funcPtrArr[])(int, int) = {add, subtract, multiply, divide};

int add(int a, int b) 
{
    return a + b;
}

int subtract(int a, int b) 
{
    return a - b;
}

int multiply(int a, int b) 
{
    return a * b;
}

int divide(int a, int b) 
{
    return a / b;
}

void main() 
{
    int num1 = 10, num2 = 5;
    for (int i = 0; i < 4; i++) 
    {
        printf("%d, ",funcPtrArr[i](num1, num2));
    }
}