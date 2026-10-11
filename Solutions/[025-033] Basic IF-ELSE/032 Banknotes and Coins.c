// https://judge.beecrowd.com/en/problems/view/1021

#include <stdio.h>

int main()
{
	double given_money = 0;
	scanf("%lf", &given_money);

	int money = (int)(given_money * 100 + 0.5);

	const int note_100 = money / 10000; money %= 10000;
	const int note_50  = money /  5000; money %=  5000;
	const int note_20  = money /  2000; money %=  2000;
	const int note_10  = money /  1000; money %=  1000;
	const int note_5   = money /   500; money %=   500;
	const int note_2   = money /   200; money %=   200;

	const int coin_1   = money /   100; money %=   100;
	const int coin_050 = money /    50; money %=    50;
	const int coin_025 = money /    25; money %=    25;
	const int coin_010 = money /    10; money %=    10;
	const int coin_005 = money /     5; money %=     5;
	const int coin_001 = money /     1; money %=     1;

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", note_100);
	printf("%d nota(s) de R$ 50.00\n",  note_50 );
	printf("%d nota(s) de R$ 20.00\n",  note_20 );
	printf("%d nota(s) de R$ 10.00\n",  note_10 );
	printf("%d nota(s) de R$ 5.00\n",   note_5  );
	printf("%d nota(s) de R$ 2.00\n",   note_2  );
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", coin_1  );
	printf("%d moeda(s) de R$ 0.50\n", coin_050);
	printf("%d moeda(s) de R$ 0.25\n", coin_025);
	printf("%d moeda(s) de R$ 0.10\n", coin_010);
	printf("%d moeda(s) de R$ 0.05\n", coin_005);
	printf("%d moeda(s) de R$ 0.01\n", coin_001);

	return 0;
}
