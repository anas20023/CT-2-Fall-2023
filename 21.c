#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter Row:");
    scanf("%d", &r);
    printf("Enter Colomn:");
    scanf("%d", &c);

    int arr[r][c];
    printf("Enter First %dx%d Martrics Elements\n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int arr_2[r][c];
    printf("Enter Second %dx%d Matrics Elements\n", r, c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr_2[i][j]);
        }
    }
    printf("Matrics After Addition\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\t", arr[i][j] + arr_2[i][j]);
        }
        printf("\n");
    }
}