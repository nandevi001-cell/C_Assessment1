#include<stdio.h>
int main()
{
	int x,ones,hundreds,Actual_number;
	printf("Enter a three digit number:");
	scanf("%d",&x);
	ones=x%10;
	hundreds=x/100;
	Actual_number=x-(5*(ones%2)*(hundreds%2));
	printf("Output:%d",Actual_number);
}
