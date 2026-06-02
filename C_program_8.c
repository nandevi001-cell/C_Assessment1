#include<stdio.h>
int main()
{
	int x,ones;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	ones= x%10;
	printf("Output:%d",ones);
}
