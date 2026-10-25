// https://judge.beecrowd.com/en/problems/view/1114

#include <stdio.h>

#define CORRECT_PASSWORD 2002

int main()
{
	int password = 0;

	while (scanf("%d", &password) == 1 && password != CORRECT_PASSWORD)
		printf("Senha Invalida\n");

	printf("Acesso Permitido\n");

	return 0;
}
