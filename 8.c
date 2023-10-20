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
    char ch[300];
    char ch_2[300];
    printf("Enter String:");
    gets(ch);

    int x = Count_len(ch);

    for (i = x, j = 0; i != 0, j < x; j++, i--)
    {
        ch_2[j] = ch[i - 1];
    }
    ch_2[j] = '\0';

    printf("Reversed String =%s\n", ch_2);
}
