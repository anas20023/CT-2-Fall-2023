#include <stdio.h>

int main()
{
    int x, max, max_2;
    printf("Enter Array size:");
    scanf("%d", &x);

    int arr[x];

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    max_2 = arr[1];

    for (int i = 0; i < x; i++)
    {
        if (arr[i] > max)
        {
            max_2 = max;
            max = arr[i];
        }
        else if (arr[i] < max && arr[i] > max_2)
        {
            max_2 = arr[i];
        }
    }
    printf("Second Maximum Number is %d\n", max_2);
}
