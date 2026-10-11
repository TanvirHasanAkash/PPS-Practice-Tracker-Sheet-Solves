// https://judge.beecrowd.com/en/problems/view/1048

#include <stdio.h>

void print_new_salary_details(const float old_salary, const float new_salary, const float rate)
{
	printf("Novo salario: %.2f\n", new_salary);
	printf("Reajuste ganho: %.2f\n", new_salary - old_salary);
	printf("Em percentual: %.0f %\n", rate);
}

int main()
{
	float old_salary = 0;
	scanf("%f", &old_salary);

	if (0 <= old_salary && old_salary <= 400)
		print_new_salary_details(old_salary, old_salary * 1.15, 15);
	else if (400 < old_salary && old_salary <= 800)
		print_new_salary_details(old_salary, old_salary * 1.12, 12);
	else if (800 < old_salary && old_salary <= 1200)
		print_new_salary_details(old_salary, old_salary * 1.10, 10);
	else if (1200 < old_salary && old_salary <= 2000)
		print_new_salary_details(old_salary, old_salary * 1.07, 7);
	else if (2000 < old_salary)
		print_new_salary_details(old_salary, old_salary * 1.04, 4);

	return 0;
}
