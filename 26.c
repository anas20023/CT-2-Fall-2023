#include <stdio.h>

int PWr(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * PWr(a, b - 1);
    }
}

int main()
{
    int base, power;
    printf("Enter Base:");
    scanf("%d", &base);

    printf("Enter Power:");
    scanf("%d", &power);

    printf("%d^%d = %d", base, power, PWr(base, power));
}