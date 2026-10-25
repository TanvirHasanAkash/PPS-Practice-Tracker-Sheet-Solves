// https://judge.beecrowd.com/en/problems/view/1132

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

	int sum = 0;

	for (int i = X; i <= Y; i++)
		if (i % 13 != 0)
			sum += i;

	printf("%d\n", sum);

	return 0;
}
