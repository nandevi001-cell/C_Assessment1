#include<stdio.h>
int main()
{
	int x,hundreds,tens,Actual_number;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	hundreds=x/100;
	tens=(x/10)%10;
	Actual_number=hundreds*100+tens*10+2;
	printf("Output:%d",Actual_number);
}
