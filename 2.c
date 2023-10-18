#include <stdio.h>

int main()
{
    int x,i;
    while (1)
    {
        printf("Enter A Number:");
        scanf("%d",&x);
        if (x==0)
        {
            printf("You Enterd ZERO\n");
        }
        
        if (x>0)
        {
            printf("Your Value is possitive\n");
        }
        else
        {
            printf("Your Value is Negative\n");
        }
        
    }
    
}