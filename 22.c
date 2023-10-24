#include <stdio.h>

int main()
{
    int r_1, c_1, r_2, c_2, i, j, k = 1;

    printf("Row and Column for first matrix: ");
    scanf("%d %d", &r_1, &c_1);
    printf("Row and Column for second matrix: ");
    scanf("%d %d", &r_2, &c_2);
    int arr[r_1][c_1];
    int arr_2[r_2][c_2];
    if ((r_1 == r_2) && (c_1 == c_2))
    {
        printf("Enter First Matrix Elements\n");
        for (i = 0; i < r_1; i++)
        {
            for (j = 0; j < c_1; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        printf("Enter Second Matrix Elements\n");
        for (i = 0; i < r_1; i++)
        {
            for (j = 0; j < c_1; j++)
            {
                scanf("%d", &arr_2[i][j]);
            }
        }
        for (int i = 0; i < r_1; i++)
        {

            for (int j = 0; j < c_1; j++)
            {
                if (arr[i][j] != arr_2[i][j])
                {
                    k = 0;
                    break;
                }
            }
        }

        if (k == 0)
        {
            printf("Matrices are Not Same [Corresponding Values are Not Same] \n");
        }
        else
        {

            printf("Matrices are Same [Corresponding Values are Same] \n");
        }
    }
    else
    {
        printf("Matrices are Not Same [Invalid Size] \n");
    }
}