#include<stdio.h>

int main()
{
    FILE *txtf;

    txtf=fopen("5.txt","w");

    char name[600];

    fgets(name,600,stdin);

    fprintf(txtf,"%s",name);
    txtf=fclose(txtf);
}
