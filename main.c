#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,A[10];
    printf("Ingrese 10 datos \n");
    for(i=0;i<10;i++)
    {
       printf("Ingrese el dato %d",i+1);
       scanf("%d",&A[i]);
    }
    return 0;
}
