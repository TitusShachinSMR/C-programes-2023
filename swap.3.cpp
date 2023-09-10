#include<stdio.h>
int main()
{ float x,y;
printf("please enter number x:");
scanf("%f",&x);
printf("please enter number y:");
scanf("%f",&y);
x=x+y;
y=x-y;
x=(x/2)+(y/2);
printf("number x=%f",x);
printf("number y=%f",y);
}
