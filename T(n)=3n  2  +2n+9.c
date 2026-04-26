#include <stdio.h>

void func1(int n)
{
    int i,j,count=0;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            count++;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            count++;

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            count++;

    for(i=0;i<2*n;i++)
        count++;

    for(i=0;i<9;i++)
        count++;

    printf("Count = %d\n",count);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    func1(n);
}