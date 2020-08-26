#include <stdio.h>
int main()
{
	float cost;
	printf("Input money : ");
	scanf_s("%f", &cost);

	if (cost == 0 || cost < 0)
	{
		printf("It's impossible");
		return 0;
	}
	if (cost >= 50000)
	{
		float percen = 20.00 / 100.00;
		float sum = cost * percen;
		float price = cost - sum;
		printf("Discount 20%%");
		printf("\nPrice to pay = %.2f", price);
		return 0;
	}
	if (cost >= 10000)
	{
		float percen = 15.00 / 100.00;
		float sum = cost * percen;
		float price = cost - sum;
		printf("Discount 15%%");
		printf("\nPrice to pay = %.2f", price);
		return 0;
	}
	if (cost >= 1000)
	{
		float percen = 10.00 / 100.00;
		float sum = cost * percen;
		float price = cost - sum;
		printf("Discount 10%%");
		printf("\nPrice to pay = %.2f", price);
		return 0;
	}


	else if (1 <= cost < 1000)
	{
		printf("Price to pay = %.2f", cost);
	}

	return 0;
}