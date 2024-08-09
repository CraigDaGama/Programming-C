#include<stdio.h>
void main()
{
    int n,f;
    printf("enter a number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("fact=%d",f);
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return (n*fact(n-1));
}
