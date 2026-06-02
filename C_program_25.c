#include<stdio.h>
int main()
{
	int x,sum,unit;
	printf("Enter the three digit number:");
	scanf("%d",&x);
	sum=(x/100)+((x/10)%10)+(x%10);
	unit=(sum/10)+(sum%10);
	printf("Unit sum:%d",unit);
}
