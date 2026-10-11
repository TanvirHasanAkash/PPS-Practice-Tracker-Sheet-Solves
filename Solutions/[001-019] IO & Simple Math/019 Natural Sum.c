// https://judge.beecrowd.com/en/problems/view/1805

#include <stdio.h>

int main()
{
	long long int A = 0;
	long long int B = 0;
	scanf("%lld %lld", &A, &B);

	printf(
		"%lld\n",
		(B * (B + 1) - A * (A - 1)) / 2
	);

	return 0;
}
