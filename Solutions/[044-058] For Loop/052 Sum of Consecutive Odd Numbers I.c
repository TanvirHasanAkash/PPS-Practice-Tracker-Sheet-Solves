// https://judge.beecrowd.com/en/problems/view/1071

#include <stdio.h>

inline static int sum_of_odd_to_r(int r)
{
	const int n = r % 2 == 0 ? r / 2 : (r + 1) / 2;
	return n * n;
}

int main()
{
	int X = 0;
	int Y = 0;
	scanf("%d %d", &X, &Y);

	printf("%d\n",
		sum_of_odd_to_r(X - 1) - sum_of_odd_to_r(Y)
	);

	return 0;
}
