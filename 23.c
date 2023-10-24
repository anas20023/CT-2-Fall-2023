#include <stdio.h>

int main()
{
    char a[300];
    printf("Enter A String:");
    scanf(" %[^\n]", &a);

    int i = 0, count = 0;

    for (i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    printf("Length Of the String = %d\n", count);
}