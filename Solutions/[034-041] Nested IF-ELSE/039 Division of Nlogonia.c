// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2493

#include <stdio.h>

int main()
{
	int test_case = 0;
	int division_x = 0, division_y = 0;

	scanf("%d", &test_case);
	scanf("%d %d", &division_x, &division_y);

	int coord_x = 0, coord_y = 0;

	while (test_case--)
	{
		scanf("%d %d", &coord_x, &coord_y);

		coord_x -= division_x;
		coord_y -= division_y;

		if (coord_x == 0 || coord_y == 0)
		{
			printf("divisa\n");
		}
		else
		{
			if (coord_y > 0)
			{
				if (coord_x > 0)
				{
					printf("NE\n");
				}
				else
				{
					printf("NO\n");
				}
			}
			else
			{
				if (coord_x > 0)
				{
					printf("SE\n");
				}
				else
				{
					printf("SO\n");
				}
			}
		}
	}

	return 0;
}
