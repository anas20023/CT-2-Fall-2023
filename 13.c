#include <stdio.h>

int main()
{
    int r, c, sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    printf("sum of All the Elements:%d", sum);
}