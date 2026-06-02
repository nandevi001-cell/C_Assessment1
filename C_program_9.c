#include<stdio.h>
int main()
{
	int x,hundreds_place;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	hundreds_place= x/100;
	printf("Output:%d",hundreds_place);
}
