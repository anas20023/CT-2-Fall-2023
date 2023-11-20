#include <stdio.h>

int main()
{
    int x, *ptr;
    printf("Enter Array size :");
    scanf("%d", &x);
    int arr[x];

    ptr = &arr[0]; /// Accessing the Array with Pointer ///

    for (int i = 0; i < x; i++)
    {
        scanf("%d", ptr);
        ptr++;
    } /// Accessing the Array with Pointer ///

    ptr = arr;
    for (int i = 0; i < x; i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
}
