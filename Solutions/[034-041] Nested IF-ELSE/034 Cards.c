// https://judge.beecrowd.com/en/problems/view/2456

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int card1 = 0;
	int card2 = 0;
	int card3 = 0;
	int card4 = 0;
	int card5 = 0;

	scanf(
		"%d %d %d %d %d",
		&card1, &card2, &card3, &card4, &card5
	);

	const _Bool c12 = card1 < card2;
	const _Bool c23 = card2 < card3;
	const _Bool c34 = card3 < card4;
	const _Bool c45 = card4 < card5;

	const _Bool is_ascending = c12 && c23 && c34 && c45;
	const _Bool is_descending = !c12 && !c23 && !c34 && !c45;

	if (is_ascending)
		printf("C\n");
	else if (is_descending)
		printf("D\n");
	else
		printf("N\n");

	return 0;
}
