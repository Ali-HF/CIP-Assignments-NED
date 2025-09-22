#include <stdio.h>

int main (void) 
{
	int purchase = 0;
	float discount, after_discount;
	
	printf("input the amount spent: ");
	scanf("%d", &purchase);
	
	if (purchase < 1000)
	{
		discount = 0;
	}
	else if (purchase >= 1000 && purchase <= 2000)
	{
		discount = purchase * 0.05;
	}
	else
	{
		discount = purchase * 0.1;
	}
	
	after_discount = purchase - discount;

	printf("\nthe amount after the discount is: %.1f", after_discount);
}