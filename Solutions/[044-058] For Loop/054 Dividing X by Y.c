// https://judge.beecrowd.com/en/problems/view/1116

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int X = 0;
	int Y = 0;
	double quotient = 0;

	while(N--)
	{
		scanf("%d %d", &X, &Y);

		if (Y != 0)
		{
			quotient = (double) X / (double) Y;
			printf("%.1lf\n", quotient);
		}
		else
		{
			printf("divisao impossivel\n");
		}
	}

	return 0;
}
