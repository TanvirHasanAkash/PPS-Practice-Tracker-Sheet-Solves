// https://judge.beecrowd.com/en/problems/view/2060

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	int multiple_2 = 0;
	int multiple_3 = 0;
	int multiple_4 = 0;
	int multiple_5 = 0;

	int L = 0;

	while(N--)
	{
		scanf("%d", &L);

		if (L % 2 == 0) multiple_2++;
		if (L % 3 == 0) multiple_3++;
		if (L % 4 == 0) multiple_4++;
		if (L % 5 == 0) multiple_5++;
	}

	printf("%d Multiplo(s) de 2\n", multiple_2);
	printf("%d Multiplo(s) de 3\n", multiple_3);
	printf("%d Multiplo(s) de 4\n", multiple_4);
	printf("%d Multiplo(s) de 5\n", multiple_5);

	return 0;
}
