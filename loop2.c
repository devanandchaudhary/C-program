#include<stdio.h>
#include<conio.h>
void main()
{
int rows,i,j;
printf("enter the row\n");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for (j=1;j<=i;j++)
{
printf("%d\t",i);
}
printf("\n");
}
getch();
}
