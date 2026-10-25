// https://judge.beecrowd.com/en/problems/view/1134

#include <stdio.h>

#define CODE_ALCOHOL 1
#define CODE_GASOLINE 2
#define CODE_DIESEL 3

int main()
{
	int code = 0;

	int alcohol = 0;
	int gasoline = 0;
	int diesel = 0;

	while (scanf("%d", &code) && code != 4)
	{
		switch (code)
		{
			case CODE_ALCOHOL:  alcohol++;  break;
			case CODE_GASOLINE: gasoline++; break;
			case CODE_DIESEL:   diesel++;   break;
		}
	}

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcohol);
	printf("Gasolina: %d\n", gasoline);
	printf("Diesel: %d\n", diesel);

	return 0;
}
