#include <stdio.h>

void Arr_Sc(int *arr[], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void Arr_Print(int arr[],int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int x;
    printf("Enter Array Size:");
    scanf("%d", &x);
    int arr[x];
    int arr_2[x];
    Arr_Sc(arr, x);

    for (int i = 0; i < x; i++)
    {
        arr_2[i] = arr[i];
    }
    Arr_Print(arr_2,x);
}