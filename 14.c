#include <stdio.h>
#include <string.h>

int main()
{
    char a[300];
    char b[300];

    printf("Enter a String: ");
    scanf(" %[^\n]", a);

    int count_len = 0;
    int i, j, k;

    for (i = 0; a[i] != '\0'; i++)
    {
        count_len++;
    }

    for (i = 0, j = count_len - 1; i < count_len; i++, j--)
    {
        b[i] = a[j];
    }
    b[i] = '\0';

    k = 0;

    for (i = 0; i < count_len; i++)
    {
        if (a[i] != b[i])
        {
            k = 1;
            break;
        }
    }

    if (k == 1)
    {
        printf("Not a Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }

    return 0;
}
