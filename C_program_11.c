#include<stdio.h>
int main()
{
	int x,y,ones,tens;
	printf("Enter the two digit number:");
	scanf("%d",&x);
	ones=x%10;
	tens=x/10;
	y=ones+tens;
	printf("Sum:%d",y);
}
