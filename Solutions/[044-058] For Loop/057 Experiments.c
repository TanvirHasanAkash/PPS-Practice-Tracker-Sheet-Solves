// https://judge.beecrowd.com/en/problems/view/1094

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int sum = 0;
	int coelho = 0;
	int rato = 0;
	int sapo = 0;

	int input_amount = 0;
	char input_type;

	while (N--)
	{
		scanf("%d %c", &input_amount, &input_type);

		switch (input_type)
		{
			case 'C': coelho += input_amount; break;
			case 'R': rato += input_amount;   break;
			case 'S': sapo += input_amount;   break;
		}
	}

	sum = coelho + rato + sapo;

	printf("Total: %d cobaias\n", sum);
	printf("Total de coelhos: %d\n", coelho);
	printf("Total de ratos: %d\n", rato);
	printf("Total de sapos: %d\n", sapo);
	printf("Percentual de coelhos: %.2lf %\n", (double) coelho * 100 / sum);
	printf("Percentual de ratos: %.2lf %\n", (double) rato * 100 / sum);
	printf("Percentual de sapos: %.2lf %\n", (double) sapo * 100 / sum);

	return 0;
}
