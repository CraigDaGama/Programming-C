#include<stdio.h>
int main(){
int a[10][10],b[10][10],mul[10][10],r1,c1,r2,c2,i,j,k;

printf("enter the number of rows and columns of first matrix\n");
scanf("%d%d",&r1,&c1);

printf("enter the first matrix elements\n");
for(i=0;i<r1;i++)
{
    for(j=0;j<c1;j++)
     {scanf("%d",&a[i][j]);}
}

printf("enter the number of rows and columns of second matrix\n");
scanf("%d%d",&r2,&c2);

printf("enter the second matrix elements\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",&b[i][j]);
}
}

printf("Product of the matrix=\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
mul[i][j]=0;
for(k=0;k<c2;k++)
{
mul[i][j]+=a[i][k]*b[k][j];
}
}
}
//for printing result
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
