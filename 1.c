#include <stdio.h>

int main()
{
    int x;
    printf("Enter Aray Size:");
    scanf("%d",&x);
    int arr[x];
    int i,sum=0;
    for(i=0;i<x;i++)
    {
        printf("Enter %d Element:",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<x;i++)
    {
        sum+=arr[i];
    }
    printf("Sum of Array Elements:%d",sum);

}