#include <stdio.h>

int main()
{
    int x;
    printf("Enter Char Array Size:");
    scanf("%d", &x);

    char alpha[x];
    for (int i = 0; i < x; i++)
    {
        scanf(" %c", &alpha[i]);
    }

    for (int i = 0; i < x; i++)
    {
        if (alpha[i] >= 'a' && alpha[i] <= 'z')
        {
            alpha[i] = alpha[i] - 32;
        }
    }
    printf("After Capitalizing the lowercase Letters-----\n");
    for (int i = 0; i < x; i++)
    {
        printf("%c\t",alpha[i]);
    }
    
}