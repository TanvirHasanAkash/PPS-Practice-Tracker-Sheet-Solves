// https://judge.beecrowd.com/en/problems/view/1036

#include <stdio.h>
#include <math.h>

int main()
{
	double A = 0;
	double B = 0;
	double C = 0;
	scanf("%lf %lf %lf", &A, &B, &C);

	const double D = pow(B, 2) - 4 * A * C;

	if (D < 0 || A <= 0)
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		const double sqrt_D = sqrt(D);
		const double R1 = (-B + sqrt_D) / (2 * A);
		const double R2 = (-B - sqrt_D) / (2 * A);

		printf("R1 = %.5lf\n", R1);
		printf("R2 = %.5lf\n", R2);
	}

	return 0;
}
