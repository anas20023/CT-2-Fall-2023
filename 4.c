#include <stdio.h>
void Print_N(int n)
{
    if (n > 0)
    {
        Print_N(n - 1);
        printf("%d\t", n);
    }
}

int main()
{
    int x;
    printf("Enter the Value of N:");
    scanf("%d", &x);
    Print_N(x);
}