// https://judge.beecrowd.com/en/problems/view/1547

#include <math.h>
#include <stdio.h>
#include <limits.h>

int main()
{
	int test_cases = 0;
	scanf("%d", &test_cases);

	while (test_cases--)
	{
		int guess_count = 0;
		int secret_num = 0;
		scanf("%d %d", &guess_count, &secret_num);

		int guess = 0;
		int closest_guess_diff = INT_MAX;
		int closest_guess_poss = 0;

		for (int i = 0; i < guess_count; i++)
		{
			scanf("%d", &guess);

			const int guess_diff = abs(secret_num - guess);

			if (guess_diff < closest_guess_diff)
			{
				closest_guess_diff = guess_diff;
				closest_guess_poss = i + 1;
			}
		}

		printf("%d\n", closest_guess_poss);
	}

	return 0;
}
