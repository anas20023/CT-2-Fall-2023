#include <stdio.h>

int main()
{
    char a[400];
    printf("Enter A String:");
    scanf(" %[^\n]", a);
    int i, num = 0, alp = 0;
    for (i = 0; a[i] != '\0'; i++)
    {
        if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        {
            alp++;
        }
        else if (a[i] >= 48 && a[i] <= 57)
        {
            num++;
        }
    }
    printf("Total Numbers in the String : %d\n", num);
    printf("Total Alphabets in the String : %d\n", alp);
}