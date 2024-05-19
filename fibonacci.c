//program to generate fibonacci sequence for n numbers
#include <stdio.h>
int main()
{
int i=0,n,t1=0,t2=1,t3;
printf("Enter the number of terms ");
scanf("%d", &n);
printf("\nFibonacci series is : ");
if(n==1)
    printf("%d",t1);
else if (n==2)
    printf("%d, %d ",t1,t2);
else
    {
    printf("%d, %d ",t1,t2);
        while(i<n-2)
        {
            t3=t1+t2;
            printf(", %d ",t3);
            t1=t2;
            t2=t3;
            i++;
        }
    }
return 0;
}
