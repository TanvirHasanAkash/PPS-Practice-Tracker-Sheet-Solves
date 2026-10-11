// https://codeforces.com/problemset/problem/1335/A

#include <stdio.h>

int main()
{
	int t = 0;
	scanf("%d", &t);

	int n = 0;

	while (t--)
	{
		scanf("%d", &n);

		if (n % 2 == 0)
			printf("%d\n", n / 2 - 1);
		else
			printf("%d\n", n / 2);
	}
}
