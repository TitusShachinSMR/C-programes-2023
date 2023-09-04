#include<stdio.h>
int main()
{
 
int a,b,t;
printf("please enter number a;\n");
scanf("%d",&a);
printf("please enter number b;\n");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("number a=%d\n",a);
printf("number b=%d\n",b);

}
