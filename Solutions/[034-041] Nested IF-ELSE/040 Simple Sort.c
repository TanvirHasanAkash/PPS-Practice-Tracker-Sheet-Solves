// https://judge.beecrowd.com/en/problems/view/1042

#include <stdio.h>

int main()
{
	// Input
	int o_num1 = 0;
	int o_num2 = 0;
	int o_num3 = 0;
	scanf("%d %d %d", &o_num1, &o_num2, &o_num3);

	int n_num1 = o_num1;
	int n_num2 = o_num2;
	int n_num3 = o_num3;

	// Sort
	int temp = 0;
	if (n_num1 > n_num2) { temp = n_num1; n_num1 = n_num2; n_num2 = temp; }
	if (n_num2 > n_num3) { temp = n_num2; n_num2 = n_num3; n_num3 = temp; }
	if (n_num1 > n_num2) { temp = n_num1; n_num1 = n_num2; n_num2 = temp; }

	printf("%d\n%d\n%d\n", n_num1, n_num2, n_num3);	// Ascending Order
	printf("\n");
	printf("%d\n%d\n%d\n", o_num1, o_num2, o_num3);	// Original Order

	return 0;
}
