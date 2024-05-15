//program to add digits at odd places
#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    if(n%2==0)
    {
        while(n!=0)
        {
            n=n/10;
            sum=sum+(n%10);
            n=n/10;

        }
    }
    else
    {
        while(n!=0)
        {
            sum=sum+(n%10);
            n=n/100;
        }
    }
    printf("sum=%d",sum);
    return 0;
}
