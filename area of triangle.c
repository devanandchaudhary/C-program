#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a,b,c,s,area;
    printf("Enter three sides of triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of triangle is:%f",area);
    getch();

}
