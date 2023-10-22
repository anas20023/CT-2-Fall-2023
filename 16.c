#include <stdio.h>

int main()
{
    int x;
    printf("Enter array size:");
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}