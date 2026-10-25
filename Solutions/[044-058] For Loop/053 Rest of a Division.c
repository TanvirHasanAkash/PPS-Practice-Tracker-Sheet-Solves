// https://judge.beecrowd.com/en/problems/view/1133

#include <stdio.h>

int main()
{
	int X = 0;
	int Y = 0;
	scanf("%d %d", &X, &Y);

	if (X > Y)
	{
		X ^= Y;
		Y ^= X;
		X ^= Y;
	}

	for (int i = X + 1; i < Y; i++)
		if (i % 5 == 2 || i % 5 == 3)
			printf("%d\n", i);

	return 0;
}
