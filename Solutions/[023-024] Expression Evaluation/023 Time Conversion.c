// https://judge.beecrowd.com/en/problems/view/1019

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int H = N / 3600;
	N %= 3600;
	int M = N / 60;
	N %= 60;
	int S = N;

	printf("%d:%d:%d\n", H, M, S);

	return 0;
}
