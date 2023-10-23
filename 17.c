#include <stdio.h>

int main()
{
    int x, sum = 0;
    printf("Enter Array Size:");
    scanf("%d", &x);

    int arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter %d Index's Value:",i);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of Array Elements = %d\n", sum);
}