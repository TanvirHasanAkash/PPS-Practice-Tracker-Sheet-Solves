// https://codeforces.com/problemset/problem/705/A

#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
			printf("I hate");
		else
			printf("I love");

		if (i + 1 != n)
			printf(" that ");
		else
			printf(" it\n");
	}

	return 0;
}
