// https://judge.beecrowd.com/en/problems/view/1013

#include <stdio.h>
#include <math.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	scanf("%d %d %d", &a, &b, &c);

	int MaiorAB = (a + b + abs(a - b))/2;
	int Maior = (MaiorAB + c + abs(MaiorAB - c))/2;

	printf("%d eh o maior\n", Maior);

	return 0;
}
