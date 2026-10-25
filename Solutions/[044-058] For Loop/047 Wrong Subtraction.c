// https://codeforces.com/problemset/problem/977/A

#include <stdio.h>

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);

	while (k--)
	{
		if (n % 10 == 0)
			n /= 10;
		else
			n--;
	}
		
	printf("%d\n", n);

	return 0;
}
