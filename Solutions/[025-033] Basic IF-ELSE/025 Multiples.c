// https://judge.beecrowd.com/en/problems/view/1044

#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;

	scanf("%d %d", &A, &B);

	if (A % B == 0 || B % A == 0)
		printf("Sao Multiplos\n");
	else
		printf("Nao sao Multiplos\n");

	return 0;
}
