#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    int sum, *p, *q;

    p = &x;
    q = &y;

    sum = *p + *q;

    printf("Sum is = %d\n", sum);
}