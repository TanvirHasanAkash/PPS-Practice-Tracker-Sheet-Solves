// https://judge.beecrowd.com/en/problems/view/1768

#include <stdio.h>

static inline void print_row(const int max_width, const int width)
{
	for (int i = 0; i < (max_width - width) / 2; i++)
		printf(" ");

	for (int j = 0; j < width; j++)
		printf("*");

	printf("\n");
}

int main()
{
	int max_width = 0;

	while (scanf("%d", &max_width) == 1)
	{
		// Printing the tree-top
		for (int width = 1; width <= max_width; width += 2)
			print_row(max_width, width);

		// Printing the tree-trunk
		print_row(max_width, 1);
		print_row(max_width, 3);

		// Stupid presentation error
		printf("\n");
	}

	return 0;
}
