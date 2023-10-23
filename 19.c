#include <stdio.h>

int main()
{
    int c, k = 1;
    printf("Enter Array Size:");
    scanf("%d", &c);

    int a[c];
    printf("Enter Array Elements:\n");
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &a[i]);
    }
    int x;
    printf("Enter Element to Search:");
    scanf("%d", &x);

    for (int i = 0; i <= c; i++)
    {
        if (a[i] == x)
        {
            printf("Element Found at %d th Index", i);
            k = 0;
            break;
        }
    }
    if (k == 1)
    {
        printf("Element Not Found");
    }
}