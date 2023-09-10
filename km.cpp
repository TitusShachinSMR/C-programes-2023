#include<stdio.h>
int main()
{
	int x,m,c,y;
	printf("please enter lenth in kilomter;\n");
	scanf("%d",&x);
	m=x*1000;
	printf("the length in meters =%d\n",m);
	c=m*100;
	printf("the length in centimeters=%d\n",c);
	y=c*10;
	printf("the length in millimeters=%d\n",y);
	return 0;
}
