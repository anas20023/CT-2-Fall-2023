#include <stdio.h>

int Count_len(char *ch)
{
    int i, x = 0;
    for (i = 0; ch[i] != '\0'; i++)
    {
        x++;
    }
    return x;
}

int main()
{
    int i, j;
    printf("Enter A String:");
    char ch[300];
    gets(ch);
    int x = Count_len(ch);

    printf("Enter Another String:");
    char ch_2[300];
    gets(ch_2);
    int y = Count_len(ch_2);

    char cat[601];

    for (i = 0; i < x; i++)
    {
        cat[i] = ch[i];
    }

    for (i = x, j = 0; i < y, j < y; i++, j++)
    {
        cat[i] = ch_2[j];
    }
    cat[i] = '\0';

    printf("Merged String = %s\n", cat);
}
