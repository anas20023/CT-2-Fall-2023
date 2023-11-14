#include <stdio.h>
 

 int main()
 {
      int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    
    int  *p, *q;

    p = &x;
    q = &y;

    *p=x+y;
    *q=x-y;
    *p=x-y;

    printf("After Swap\n");
    printf("First Vlaue is %d\n",*p);
    printf("Second Vlaue is %d\n",*q);

 }