#include <stdio.h>

void ScanF(int *arr,int a)
{
    for(int i=0 ; i<a ; i++)
    {
        scanf("%d",&arr[i]);
    }
}
int main()
{
    FILE *append;

    append= fopen("7.txt","a");

    int x;

    printf("Enter Array Size:");
    scanf("%d",&x);
    int arr[x];

    ScanF(arr,x);
    printf("Values are Successfully Appended !!!\nCheck Your txt File\n");

    for(int i=0 ; i<x ; i++)
    {
        fprintf(append,"%d\t",arr[i]);
    }
}
