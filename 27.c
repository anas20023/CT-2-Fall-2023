#include <stdio.h>

int main()
{
    int x;
    scanf("%d",&x);

    int *ptr;

    ptr = &x;

    printf("%d\n",*ptr);
}