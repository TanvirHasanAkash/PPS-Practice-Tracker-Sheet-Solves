// https://judge.beecrowd.com/en/problems/view/1004

#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;

	scanf("%d %d", &A, &B);

	const int PROD = A * B;

	printf("PROD = %d\n", PROD);

	return 0;
}
