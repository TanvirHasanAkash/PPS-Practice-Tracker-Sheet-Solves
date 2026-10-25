// https://judge.beecrowd.com/en/problems/view/1129

#include <stdio.h>
#include <stdbool.h>

#define POSSIBLE_OPTIONS 5
#define THRESHOLD 127

inline static _Bool is_selected(int color)
{
	return (color <= THRESHOLD) ? true : false;
}

int main()
{
	int lines = 0;
	
	while (scanf("%d", &lines) == 1 && lines != 0)
	{
		while (lines--)
		{
			int color_value = 0;
			int selection_index = -1;
			int marked_count = 0;

			for (int i = 0; i < POSSIBLE_OPTIONS; i++)
			{
				scanf("%d", &color_value);

				if (is_selected(color_value))
				{
					selection_index = i;
					marked_count++;
				}
			}

			if (marked_count == 1)
				printf("%c\n", 'A' + selection_index);
			else
				printf("*\n");
		}
	}

	return 0;
}
