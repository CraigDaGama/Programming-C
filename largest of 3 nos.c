//largest of 3 numbers
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
       printf("%d is the largest",a);
    }
    if(b>a && b>c)
    {
       printf("%d is the largest",b);
    }
    else printf("%d is the largest",c);
}