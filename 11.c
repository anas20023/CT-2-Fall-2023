#include <stdio.h>

int Count_Lenth(char *ch)
{
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char anas[300];
    printf("Enter String With Space:");
    scanf("%[^\n]", &anas);
    int x = Count_Lenth(anas);

    for (int i = 0; i < x; i++)
    {
        if (anas[i] == ' ')
        {
            for (int j = i; j < x; j++)
            {
                anas[j] = anas[j + 1];
            }
            x--;
        }
    }
    printf("String Without Space: %s", anas);
}