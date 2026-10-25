// https://judge.beecrowd.com/en/problems/view/1101

#include <stdio.h>

int main()
{
	int M = 0;
	int N = 0;

	while (scanf("%d %d", &M, &N) == 2 && M > 0 && N > 0)
	{
		if (M > N)
		{
			M ^= N;
			N ^= M;
			M ^= N;
		}

		int sum = 0;

		for (int i = M; i <= N; i++)
		{
			printf("%d ", i);
			sum += i;
		}

		printf("Sum=%d\n", sum);
	}

	return 0;
}
