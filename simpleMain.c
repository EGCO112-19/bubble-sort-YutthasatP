#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"

int main ()
{
    int *a,N;
    printf ("How many number: ");
    scanf ("%d",&N);
    a =(int*)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++)
    {
        printf ("Enter %d number = ",i+1);
        scanf ("%d",&a[i-1]);
    }
    bubble(a,N);
    return 0;
}