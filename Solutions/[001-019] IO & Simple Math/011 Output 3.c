// https://judge.beecrowd.com/en/problems/view/2749

#include <stdio.h>

int main() {
	printf("---------------------------------------\n");
	printf("|%-37s|\n", "x = 35");
	printf("|%37s|\n", "");
	printf("|%15s%-22s|\n", "", "x = 35");
	printf("|%37s|\n", "");
	printf("|%37s|\n", "x = 35");
	printf("---------------------------------------\n");
	return 0;
}
