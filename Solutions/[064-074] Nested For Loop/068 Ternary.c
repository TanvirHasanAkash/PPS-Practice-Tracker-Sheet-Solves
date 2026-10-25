// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2126

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define TERNARY_BASE 3

inline static size_t calculate_max_digits(int num, size_t base)
{
	size_t count = 0;

	while (num > 0) {
		count++;
		num /= base;
	}

	return count;
}

int main()
{
	int num = 0;

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
		{
			break;
		}
		
		if (num == 0)
		{
			printf("0\n");
			continue;
		}

		const size_t max_digits = calculate_max_digits(num, TERNARY_BASE);

		unsigned int* ternary_digits = (unsigned int*) malloc(
			max_digits * sizeof(unsigned int)
		);

		for (int i = max_digits - 1; num > 0; i--)
		{
			ternary_digits[i] = num % TERNARY_BASE;
			num /= TERNARY_BASE;
		}

		for (size_t i = 0; i < max_digits; i++)
		{
			printf("%u", ternary_digits[i]);
		}

		printf("\n");

		free(ternary_digits);
	}

	return 0;
}
