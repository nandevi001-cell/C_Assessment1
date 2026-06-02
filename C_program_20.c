#include<stdio.h>
int main()
{
	int x,hundreds,tens,ones,Actual_number;
	printf("Enter a three digit number:");
	scanf("%d",&x);
	hundreds=x/100;
	tens=(x/10)%10;
	ones=x%10;
	Actual_number=hundreds*100+tens*0+ones;
	printf("Output:%d",Actual_number);
}
