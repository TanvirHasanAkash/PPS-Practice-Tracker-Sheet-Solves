// https://judge.beecrowd.com/en/problems/view/1397

#include <stdio.h>

int main()
{
	int N = 0;

	int score_A = 0;
	int score_B = 0;

	while (scanf("%d", &N) && N != 0)
	{
		int A = 0;
		int B = 0;

		while (N--)
		{
			scanf("%d %d", &A, &B);

			if (A > B) score_A++;
			else if (A < B) score_B++;
		}

		printf("%d %d\n", score_A, score_B);

		score_A = 0;
		score_B = 0;
	}

	return 0;
}
