// https://judge.beecrowd.com/en/problems/view/2674

#include <stdio.h>
#include <stdbool.h>

inline static _Bool is_prime(const int num)
{
	if (num <= 1) return false;
	if (num == 2 || num == 3) return true;
	if (num % 2 == 0 || num % 3 == 0) return false;

	for (int i = 5; i * i <= num; i += 6)
		if (num % i == 0 || num % (i + 2) == 0)
			return false;

	return true;
}

inline static _Bool are_digits_prime(int num)
{
	if (num == 0) return false;

	while (num > 0)
	{
		int digit = num % 10;

		if (digit != 2 && digit != 3 && digit != 5 && digit != 7)
			return false;

		num /= 10;
	}

	return true;
}

int main()
{
	int num = 0;

	while (scanf("%d", &num) == 1)
	{
		if (is_prime(num))
		{
			if (are_digits_prime(num))
				printf("Super\n");
			else
				printf("Primo\n");
		}
		else
		{
			printf("Nada\n");
		}
	}

	return 0;
}
