#include <stdio.h>

void ScanArr(int *arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("Enter %d th Index's Value:", i);
        scanf("%d", &arr[i]);
    }
}
void PrintArr(const int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{
    int x, j;
    printf("Enter Array Size:");
    scanf("%d", &x);

    int arr[x];
    ScanArr(arr, x);

    int y;
    printf("Enter Another Array Size:");
    scanf("%d", &y);

    int arr_[y];
    ScanArr(arr_, y);

    int arrAdd[x + y];

    for (int i = 0; i < x; i++)
    {
        arrAdd[i] = arr[i];
    }
    for (int i = x, j = 0; i < x + y, j < y; j++, i++)
    {
        arrAdd[i] = arr_[j];
    }
    printf("Merged Array\n");

    PrintArr(arrAdd, x + y);
}