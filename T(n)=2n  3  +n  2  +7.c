#include <stdio.h>

void func3(int n)
{
    int i,j,k,count=0;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                count++;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                count++;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            count++;

    for(i=0;i<7;i++)
        count++;

    printf("Count = %d\n",count);
}