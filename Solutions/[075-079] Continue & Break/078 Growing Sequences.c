// https://judge.beecrowd.com/en/problems/view/1146

#include <stdio.h>

int main()
{
	int n = 0;
	while (scanf("%d", &n) && n !=0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i != n)
				printf("%d ", i);
			else
				printf("%d", i);
		}

		printf("\n");
	}

	return 0;
}
