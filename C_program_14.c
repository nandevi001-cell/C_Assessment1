#include<stdio.h>
int main()
{
	int x,Ones,Tens,Hundreds,Reversed_number;
	printf("Enter a three-digit number:");
	scanf("%d",&x);
	Ones=x%10;
	Tens= (x/10)%10;
	Hundreds=x/100;
	Reversed_number= Ones*100+Tens*10+Hundreds;
	printf("Output:%d",Reversed_number);
}
