#include<stdio.h>
void main()
{
    int i,f,n;
    printf("\nenter value in inches ");
    scanf("%d",&n);
    f=n/12;
    i=n%12;
    printf("\nvalue is %d feet and %d inches",f,i);
}