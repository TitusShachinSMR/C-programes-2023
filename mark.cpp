#include<stdio.h>
int main()
{
	int m,p,c,b,e,x;
	printf("please enter math mark;\n");
	scanf("%d",&m);
	printf("please enter physics mark;\n");
	scanf("%d",&p);
	printf("please enter chemistry mark;\n");
	scanf("%d",&c);
	printf("please enter bio mark:\n");
	scanf("%d",&b);
	printf("please enter eng mark;\n");
	scanf("%d",&e);
	x=(m/5)+(p/5)+(c/5)+(b/5)+(e/5);
	printf("percentage of mark=%d%%",x);
} 
