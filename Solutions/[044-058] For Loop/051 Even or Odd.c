// https://judge.beecrowd.com/en/problems/view/1074

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int X = 0;

	while (N--)
	{
		scanf("%d", &X);

		if (X != 0)
		{
			if (X % 2 == 0)
				printf("EVEN ");
			else
				printf("ODD ");

			if (X < 0)
				printf("NEGATIVE\n");
			else
				printf("POSITIVE\n");
		}
		else
		{
			printf("NULL\n");
		}
	}

	return 0;
}
