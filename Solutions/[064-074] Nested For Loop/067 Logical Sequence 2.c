// https://judge.beecrowd.com/en/problems/view/1145

#include <stdio.h>

int main()
{
	int X = 0;
	int Y = 0;
	scanf("%d %d", &X, &Y);

	for (int i = 1; i <= Y; i++)
	{
		printf("%d", i);

		if (i % X != 0)
			printf(" ");
		else
			printf("\n");
	}

	return 0;
}
