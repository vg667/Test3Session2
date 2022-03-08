#include <stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
printf("Enter numerator and denominator value ");
scanf("%d%d",num1,den1);
printf("Enter numerator and denominator value ");
scanf("%d%d",num2,den2);
}



void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
int hcf,lcm,a,b;
for (int i=1;i<=den1 && i<=den2;++i)
{
if (den1%i==0 && den2%i==0)
{
hcf=i;
}
}
lcm=(den1 * den2)/hcf;
a=lcm/den1;
b=lcm/den2;
num1=a*num1;
den1=a*den1;
num2=b*num2;
den2=b*den2;
*num3=num1+num2;
*den3=den1;
}
void output(int num1,int den1,int num2,int den2,int num3,int den3)
{
printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,num3,den3);
}



int main()
{
int num1,den1,num2,den2,num3,den3;
input(&num1,&den1,&num2,&den2);
add(num1,den1,num2,den2,&num3,&den3);
output(num1,den1,num2,den2,num3,den3);
return 0;
}