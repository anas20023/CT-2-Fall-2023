#include <stdio.h>
#include <string.h>

int Cnt_len(char b[])
{
    int c = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}

int main()
{
    int i, j, k = 0;

    char b[300];
    printf("Enter A String:");
    fgets(b, 300, stdin);

    char c[300];
    printf("Enter Another String:");
    fgets(c, 300, stdin);
    b[strcspn(b, "\n")] = '\0';
    c[strcspn(c, "\n")] = '\0';

    int x = Cnt_len(b);
    int y = Cnt_len(c);
    if (x == y)
    {
        for (i = 0; i < x; i++)
        {
            if (b[i] != c[i])
            {
                k = 1;
                break;
            }
        }
        if (k == 0)
        {
            printf("String Matched ! \n");
        }
        else
        {
            printf("String Not Matched ! \n");
        }
    }
    else
    {
        printf("String Not Matched ! [Not Same Length] \n");
    }
}