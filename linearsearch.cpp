#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int n;
    printf("array size=");
    scanf("%d",&n);
    int a[n],i,z,k=0;

    clock_t sr,st;

    srand(time(NULL));
    for(i=0;i<n;i++)
    {
       a[i]=rand()%100+1;
    }
    printf("\Array elements= ");
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter the element to search=");
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            k=1;
        }
    }
    if(k==1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
    return 0;

}
