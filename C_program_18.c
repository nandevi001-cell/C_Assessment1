#include<stdio.h>
int main()
{
	int x,ones,Actual_number;
	printf("Enter a two-digit number:");
	scanf("%d",&x);
	ones=x%10;
	Actual_number=1*10+ones;
	printf("Output:%d",Actual_number);
}
