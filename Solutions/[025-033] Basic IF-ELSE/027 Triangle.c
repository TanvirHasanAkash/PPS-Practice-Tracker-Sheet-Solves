// https://judge.beecrowd.com/en/problems/view/1043

#include <stdio.h>
#include <stdbool.h>

_Bool is_triangle(const float a, const float b, const float c)
{
	return (
		a + b > c &&
		b + c > a &&
		c + a > b
	);
}

float calculate_perimeter(const float a, const float b, const float c)
{
	return a + b + c;
}

float calculate_area(const float a, const float b, const float c)
{
	return (a + b) * c / 2;
}

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;

	scanf("%f %f %f", &a, &b, &c);

	if (is_triangle(a, b, c))
		printf("Perimetro = %.1f\n", calculate_perimeter(a, b, c));
	else
		printf("Area = %.1f\n", calculate_area(a, b, c));

	return 0;
}
