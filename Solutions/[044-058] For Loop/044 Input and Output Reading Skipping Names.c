// https://judge.beecrowd.com/en/problems/view/2766

#include <stdio.h>

int main()
{
	char name[30];

	for(size_t i = 1; i <= 10; i++)
	{
		scanf("%s", &name);

		switch(i)
		{
			case 3:
			case 7:
			case 9:
				printf("%s\n", name);
				break;
			default:
				continue;
		}
	}

	return 0;
}
