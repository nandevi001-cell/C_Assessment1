#include <stdio.h>
int main()
{
    int x,y,Changed_number;
	printf("Enter a number: ");
    scanf("%d", &x);
    y=x/10;
	Changed_number= x - 5 * (y % 2);
	printf("Output: %d", Changed_number);
}
