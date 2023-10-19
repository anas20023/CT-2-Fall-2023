#include <stdio.h>

int Print_Fact(int n)
{
    if (n == 1)
        return 1;
    else if (n == 0)
    {
        return 0;
    }
    else
        return n * Print_Fact(n - 1);
}

int main()
{
    int x;
    printf("Enter N :");
    scanf("%d", &x);
    printf("%d ! = %d\n", x, Print_Fact(x));
}