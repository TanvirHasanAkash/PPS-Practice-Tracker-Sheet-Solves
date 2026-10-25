// https://judge.beecrowd.com/en/problems/view/2140

#include <stdio.h>
#include <stdbool.h>

static inline _Bool is_bill(int amount)
{
	switch (amount)
	{
		case 2:
		case 5:
		case 10:
		case 20:
		case 50:
		case 100:
			return true;
		default:
			return false;
	}
}

int main()
{
	const int bills[] = { 2, 5, 10, 20, 50, 100 };
	#define POSSIBLE_BILL_COUNT 6

	int price = 0;
	int payment = 0;

	while (scanf("%d %d", &price, &payment) && price != 0 && payment != 0)
	{
		const int needed_change = payment - price;

		_Bool is_possible = false;

		for (int i = 0; i < POSSIBLE_BILL_COUNT; i++)
		{
			if (is_bill(needed_change - bills[i]))
			{
				is_possible = true;
				break;
			}
		}

		if (is_possible)
			printf("possible\n");
		else
			printf("impossible\n");
	}

	return 0;
}
