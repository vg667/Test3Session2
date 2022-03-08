#include<stdio.h>
typedef struct fraction
{
int num,den;
}fraction;
fraction input_fraction()
{
fraction a;
printf("Enter numerator and denominator value ");
scanf("%d%d",&a.num,&a.den);
return a;
}



fraction largest(fraction f1,fraction f2,fraction f3)
{
int a,b,c;
a=f1.num/f1.den;
b=f2.num/f2.den;
c=f3.num/f3.den;
if (a>b && a>c)
{
return f1;
}
else if (b>a && b>c)
{
return f2;
}
else
{
return f3;
}
}



void output(fraction largest)
{
printf("%d/%d is the largest",largest.num,largest.den);
}



int main()
{
fraction f1,f2,f3,l;
f1=input_fraction();
f2=input_fraction();
f3=input_fraction();
l=largest(f1,f2,f3);
output(l);
return 0;
}