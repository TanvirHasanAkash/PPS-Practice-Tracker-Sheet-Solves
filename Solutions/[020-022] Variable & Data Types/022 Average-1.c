// https://judge.beecrowd.com/en/problems/view/1005

#include <stdio.h>

int main()
{
	double A = 0;
	double B = 0;
	scanf("%lf %lf", &A, &B);

	const double gpa = (3.5 * A + 7.5 * B) / 11;

	printf("MEDIA = %.5lf\n", gpa);

	return 0;
}
