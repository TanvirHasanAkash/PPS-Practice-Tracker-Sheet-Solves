// https://judge.beecrowd.com/en/problems/view/2787

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int row = 0;
	int col = 0;

	scanf("%d %d", &row, &col);

	if ((row + col) % 2 == 0)
		printf("1\n");  // White
	else
		printf("0\n");  // Black

	return 0;
}
