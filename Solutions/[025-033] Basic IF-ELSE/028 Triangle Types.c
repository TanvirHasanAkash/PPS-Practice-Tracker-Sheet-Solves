// https://judge.beecrowd.com/en/problems/view/1045

#include <stdio.h>

int main()
{
	// Initialization and Input
	double A = 0;
	double B = 0;
	double C = 0;
	scanf("%lf %lf %lf", &A, &B, &C);

	// Sorting from largest to smallest
	double temp = 0;
	if (A < B) { temp = A; A = B; B = temp; }
	if (B < C) { temp = B; B = C; C = temp; }
	if (A < B) { temp = A; A = B; B = temp; }

	// Caching squared values
	const double sA = A * A;
	const double sB = B * B;
	const double sC = C * C;

	// Type Check
	if (A >= B + C)
		printf("NAO FORMA TRIANGULO\n");
	else if (sA == sB + sC)
		printf("TRIANGULO RETANGULO\n");
	else if (sA > sB + sC)
		printf("TRIANGULO OBTUSANGULO\n");
	else if (sA < sB + sC)
		printf("TRIANGULO ACUTANGULO\n");

	// Similarity Check
	if (A == B && B == C && C == A)
		printf("TRIANGULO EQUILATERO\n");
	else if ((A == B && B != C) || (B == C && C != A) || (C == A && A != B))
		printf("TRIANGULO ISOSCELES\n");

	return 0;
}
