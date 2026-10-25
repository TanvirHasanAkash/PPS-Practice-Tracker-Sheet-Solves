// https://judge.beecrowd.com/en/problems/view/2963

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n = 0;
	scanf("%d", &n);

	int carlos_votes = 0;
	scanf("%d", &carlos_votes);

	int won = true;
	for (int i = 1; i < n; i++)
	{
		int other_votes;
		scanf("%d", &other_votes);

		if (other_votes > carlos_votes)
			won = false;
	}

	if (won)
		printf("S\n");
	else
		printf("N\n");

	return 0;
}
