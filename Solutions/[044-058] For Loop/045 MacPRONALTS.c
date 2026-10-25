// https://judge.beecrowd.com/en/problems/view/1985

#include <stdio.h>

double get_price(const int code)
{
	switch(code)
	{
		case 1001: return 1.50;
		case 1002: return 2.50;
		case 1003: return 3.50;
		case 1004: return 4.50;
		case 1005: return 5.50;
		default: return 0;
	}
}

int main()
{
	int order_count = 0;
	scanf("%d", &order_count);

	int code = 0;
	int quantity = 0;

	double total = 0;

	while (order_count--)
	{
		scanf("%d %d", &code, &quantity);
		total += quantity * get_price(code);
	}

	printf("%.2lf\n", total);

	return 0;
}
