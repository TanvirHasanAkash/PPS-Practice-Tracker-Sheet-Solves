// https://judge.beecrowd.com/en/problems/view/1113

#include <stdio.h>

int main()
{
	int X = 0;
	int Y = 0;

	while(scanf("%d %d", &X, &Y) == 2 && X != Y)
	{
		if (X > Y)
			printf("Decrescente\n");
		else
			printf("Crescente\n");
	}

	return 0;
}
