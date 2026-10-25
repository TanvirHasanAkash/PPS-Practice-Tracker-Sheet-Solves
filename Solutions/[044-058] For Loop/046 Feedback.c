// https://judge.beecrowd.com/en/problems/view/1546

#include <stdio.h>

int main()
{
	int N = 0;
	scanf("%d", &N);

	while (N--)
	{
		int K = 0;
		scanf("%d", &K);

		while (K--)
		{
			int code = 0;
			scanf("%d", &code);

			switch (code)
			{
				case 1: printf("Rolien\n");   break;
				case 2: printf("Naej\n");     break;
				case 3: printf("Elehcim\n");  break;
				case 4: printf("Odranoel\n"); break;
			}
		}
	}

	return 0;
}
