// https://judge.beecrowd.com/en/problems/view/2172

#include <stdio.h>

int main()
{
	unsigned int X = 0;
	unsigned long M = 0;

	while (scanf("%lu %lu", &X, &M) && X != 0 && M != 0)
		printf("%lu\n", X * M);

	return 0;
}
