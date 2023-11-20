#include <stdio.h>

int main()
{

    FILE *rfile;

    rfile=fopen("CSE Lab task.txt","r");

    char out[500];
    fscanf(rfile , "%[^\n]",out);
    printf("%s\n",out);
    rfile=fclose(rfile);


}
