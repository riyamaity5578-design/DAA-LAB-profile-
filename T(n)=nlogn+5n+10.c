#include <stdio.h>

void func2(int n)
{
    int i,j,count=0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j=j*2)
            count++;
    }

    for(i=0;i<5*n;i++)
        count++;

    for(i=0;i<10;i++)
        count++;

    printf("Count = %d\n",count);
}
