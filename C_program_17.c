#include<stdio.h>
int main()
{
	int x,ones,one_s,tens,Actual_number;
	printf("Enter a two-digit number:");
	scanf("%d",&x);
	ones= x % 10;
	one_s=ones-ones;
	tens=x/10;
	Actual_number=tens*10+one_s;
	printf("Output:%d",Actual_number);
}
