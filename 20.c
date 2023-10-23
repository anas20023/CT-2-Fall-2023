#include <stdio.h>

int main()
{
    int x, k;
    printf("Enter Array Size:");
    scanf("%d", &x);

    int arr[x];
    int Count[x];

    for (int i = 0; i < x; i++)
    {
        printf("Enter %d th Index;s Value:", i);
        scanf("%d", &arr[i]);
        Count[i] = -1;
    }
    for (int i = 0; i < x; i++)
    {
        k = 1;
        for (int j = i + 1; j < x; j++)
        {

            if (arr[i] == arr[j])
            {
                k++;
                Count[j] = 0;
            }
            else
            {
                k += 0;
            }
        }
        if (Count[i] != 0)
        {
            Count[i] = k;
        }
    }
    printf("Frequency Count\n");
    for (int i = 0; i < x; i++)
    {
        if (Count[i] != 0)
        {
            printf("%d Occurs %d Times\n", arr[i], Count[i]);
        }
    }
}