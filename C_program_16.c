#include<stdio.h>
int main()
{
	int x,ones,tens,hundreds,thousands,Reversed_number;
	printf("Enter a four digit number:");         
	scanf("%d",&x);
	ones=x%10;
	thousands=x/1000;
	tens=(x/10)%10;
	hundreds=(x/100)%10;
	Reversed_number=(ones*1000)+(tens*100)+(hundreds*10)+thousands;
	printf("Output:%d",Reversed_number);
}
