// https://judge.beecrowd.com/en/problems/view/2313

#include <stdio.h>

int main()
{
	int A = 0;
	int B = 0;
	int C = 0;
	scanf("%d %d %d", &A, &B, &C);

	if (A < B + C && B < C + A && C < A + B)
	{
		if (A == B && B == C)
		{
			printf("Valido-Equilatero\n");	// Equilateral Triangle
		}
		else if (A != B && B != C && C != A)
		{
			printf("Valido-Escaleno\n");	// Scalene Triangle
		}
		else if ((A == B && A != C) || (B == C) && (B != A) || (C == A) && (C != B))
		{
			printf("Valido-Isoceles\n");	// Isosceles Triangle
		}

		const int sA = A * A;
		const int sB = B * B;
		const int sC = C * C;

		if (sA == sB + sC || sB == sC + sA || sC == sA + sB)
		{
			printf("Retangulo: S\n");		// Triangle is a rectangle
		}
		else
		{
			printf("Retangulo: N\n");		// Triangle isn't a rectangle
		}
	}
	else
	{
		printf("Invalido\n");				// Not a triangle
	}

	return 0;
}
