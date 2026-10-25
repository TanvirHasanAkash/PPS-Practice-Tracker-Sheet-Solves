// https://judge.beecrowd.com/en/problems/view/1080

#include <stdio.h>
#include <limits.h>

int main()
{
	int input = 0;

	int max = INT_MIN;
	int pos = 0;

	for (int i = 1; i <= 100; i++)
	{
		scanf("%d", &input);

		if (input > max)
		{
			max = input;
			pos = i;
		}
	}

	printf("%d\n%d\n", max, pos);

	return 0;
}
