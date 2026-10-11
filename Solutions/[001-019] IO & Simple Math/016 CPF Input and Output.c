// https://judge.beecrowd.com/en/problems/view/2763

#include <stdio.h>

int main()
{
	int X = 0;
	int Y = 0;
	int Z = 0;
	int D = 0;
	scanf("%d.%d.%d-%d", &X, &Y, &Z, &D);

	printf("%03d\n%03d\n%03d\n%02d\n", X, Y, Z, D);

	return 0;
}
