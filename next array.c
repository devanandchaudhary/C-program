#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,a[20],temp;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the element\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<=;i++)
{
    for(j=i+1;j<5;j++)
    {
if(a[i]>a[j])
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
    }
printf("the element in ascending order is \n");
for(i=0;i<=5;i++)
{
    printf("%d",a[i]);
}
getch();
retun(0);
}



