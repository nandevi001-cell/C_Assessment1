#include<stdio.h>
int main()
{
	int x,Ones,Tens,Reversed_number;
	printf("Enter a two-digit number:");
	scanf("%d",&x);
	Ones=x%10;
	Tens= x/10;
	Reversed_number= (Ones*10)+Tens;
	printf("Output:%d",Reversed_number);
}
