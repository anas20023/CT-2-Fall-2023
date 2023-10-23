#include <stdio.h>

int main()
{
    int x, num, p;
    printf("Enter Array Size:");
    scanf("%d", &x);

    int arr[x];
    printf("Enter Array Elements:\n");

    for (int i = 0; i < x; i++)
    {
        printf("Enter %d Position's Value:", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Number to add:");
    scanf("%d", &num);

    printf("Enter Position to add:");
    scanf("%d", &p);
    p--;
    if (p > 1 && p < x)
    {
        for (int i = x; i >= p; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[p] = num;
        x++;
        printf("New Array:\n");
        for (int i = 0; i < x; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        printf("Invalid Position");
    }
}