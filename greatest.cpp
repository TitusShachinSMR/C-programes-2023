#include<stdio.h>
int main()
{    int x,y,z;
	printf("please enter numbers:");
    scanf("%d",&x);
	printf("please enter numbers:");
	scanf("%d",&y);
	printf("please enter numbers:");
	scanf("%d",&z);	
    if(x>y&&x>z)
      {
	  printf("greatest integer=%d",x);}
	else
	{
		if(y>x&&y>z)
		{printf("greatest integer=%d",y);}
		else
		{printf("greatest integer=%d",z);
		}
		}
	
}
