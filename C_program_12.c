#include<stdio.h>
int main()
{
	int x,ones,tens,hundreds,Sum;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	ones=x%10;
	tens=(x/10)%10;
	hundreds= x/100;
	Sum= ones+tens+hundreds;
	printf("Sum of the digits:%d",Sum);
}
