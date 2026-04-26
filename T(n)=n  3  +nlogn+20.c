#include <stdio.h>

void func4(int n)
{
    int i,j,k,count=0;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                count++;

    for(i=1;i<=n;i++)
        for(j=1;j<=n;j=j*2)
            count++;

    for(i=0;i<20;i++)
        count++;

    printf("Count = %d\n",count);
}