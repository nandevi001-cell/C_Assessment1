#include<stdio.h>
int main()
{
	int x,ones,tens,sum,Actual_number;
	printf("Enter the two-digit number:");
	scanf("%d",&x);
	tens=x/10;
	ones=x%10;
	sum=tens+ones;
	Actual_number=x-5*(sum%2);
	printf("Output:%d",Actual_number);
}
