//program to check for armstrong number
#include<stdio.h>
void main()
{
    int n,n1,n2,i=0,j=0,sum=1,count=0,a[100];
    printf("\nenter the number");
    scanf("%d",&n);
    n1=n;
    n2=n;
    //count the digits
    while(n1>0)
    {
        n1=n1/10;
        count++;
    }
    printf("\nno of digits=%d",count);

    while(n2>0&& i<count)
    {
        a[i]=(n2%10);
        n2=n2/10;
    }

    while(j<count)
    {

        {
            sum=sum*a[i];
            j++;
        }
        j=0;
        n2=n2/10;
        i++;
    }
    if(sum==n)
        printf("\narmstrong no");
    else printf("\nnot armstrong no");



}
