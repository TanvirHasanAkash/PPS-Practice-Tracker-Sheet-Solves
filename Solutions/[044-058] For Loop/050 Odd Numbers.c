// https://judge.beecrowd.com/en/problems/view/1067

#include <stdio.h>

int main()
{
	int X = 0;
	scanf("%d", &X);

	for (int i = 1; i <= X; i += 2)
		printf("%d\n", i);

	return 0;
}
