#include<stdio.h>
int main()
{
	int x,tens;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	tens= (x/10)%10;
	printf("Output:%d",tens);
}
