// https://judge.beecrowd.com/en/problems/view/1118

#include <stdio.h>
#include <stdbool.h>

#define MIN_SCORE 0
#define MAX_SCORE 10
#define SCORE_AMOUNT 2
#define SIM 1
#define NAO 2

inline static _Bool is_valid_score(const double score)
{
	return MIN_SCORE <= score && score <= MAX_SCORE;
}

inline static double average_2(const double num1, const double num2)
{
	return (num1 + num2) / 2;
}

int main()
{
	int X = 0;

	double score[2] = { 0, 0 };
	int valid_score_count = 0;

	while (X != NAO && scanf("%lf", &score[valid_score_count]) == 1)
	{
		if (!is_valid_score(score[valid_score_count]))
		{
			printf("nota invalida\n");
			continue;
		}

		valid_score_count++;

		if (valid_score_count == SCORE_AMOUNT)
		{
			printf("media = %.2lf\n", average_2(score[0], score[1]));

			X = 0;
			while (X != SIM && X != NAO)
			{
				printf("novo calculo (1-sim 2-nao)\n");
				scanf("%d", &X);
			}

			valid_score_count = 0;
			score[0] = 0;
			score[1] = 0;
		}
	}

	return 0;
}
