// https://judge.beecrowd.com/en/problems/view/1089

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N = 0;
	
	while (scanf("%d", &N) == 1 && N != 0)
	{
		int* sampled_magnitudes = (int*) malloc(N * sizeof(int));

		for (int i = 0; i < N; i++)
			scanf("%d", &sampled_magnitudes[i]);

		int peak_count = 0;

		for (int i = 0; i < N; i++)
		{
			const int current_sampled_magnitude = sampled_magnitudes[i];
			const int previous_sampled_magnitude = sampled_magnitudes[(i - 1 + N) % N];
			const int next_sampled_magnitude = sampled_magnitudes[(i + 1) % N];

			const _Bool is_local_maximum = (
				current_sampled_magnitude > previous_sampled_magnitude &&
				current_sampled_magnitude > next_sampled_magnitude
			);

			const _Bool is_local_minimum = (
				current_sampled_magnitude < previous_sampled_magnitude &&
				current_sampled_magnitude < next_sampled_magnitude
			);

			const _Bool is_peak = is_local_maximum || is_local_minimum;

			if (is_peak)
				peak_count++;
		}

		printf("%d\n", peak_count);
	}
	return 0;
}
