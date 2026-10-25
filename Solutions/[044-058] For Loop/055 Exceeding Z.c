// https://judge.beecrowd.com/en/problems/view/1150

#include <stdio.h>

int main()
{
	int X = 0;
	int Z = 0;

	scanf("%d", &X);

	do
	{
		scanf("%d", &Z);
	} while(Z <= X);

	int sum = 0;
	int i = 0;

	while (sum < Z)
	{
		sum += X++;
		i++;
	}

	printf("%d\n", i);

	return 0;
}
