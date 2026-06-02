#include<stdio.h>
int main()
{
	int x,y,z,u,v,Reversed;
	printf("Enter a four-digit number:");
	scanf("%d",&x);
	y=x/100;
	z=x%100;
	u=z/10;
	v=z%10;
	Reversed= y*100+v*10+u;
	printf("Output:%d",Reversed);
}
