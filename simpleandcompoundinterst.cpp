#include<stdio.h>
int main()
{int p;
int interest;
int t,i,m,y;
printf("enter the principle amount\n");
scanf("%d",&p);
printf("enter number of months\n");
scanf("%d",&m);
printf("enter interest per month\n");
scanf("%d",&interest);
for(i=0;i<m;i++)
{t=p;
t=t+(t*interest/100);
}
y=p+(m*p/100);
printf("simple interst=%d compound interst=%d",y,t);

}
