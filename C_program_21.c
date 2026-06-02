#include <stdio.h>
int main()
{
    int x,Changed_number;
	printf("Enter a number: ");
    scanf("%d", &x);
	Changed_number= x - 5 * (x % 2);
	printf("Output: %d", Changed_number);
}
