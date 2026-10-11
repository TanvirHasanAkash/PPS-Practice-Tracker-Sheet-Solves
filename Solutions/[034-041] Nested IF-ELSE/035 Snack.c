// https://judge.beecrowd.com/en/problems/view/1038

#include <stdio.h>

double get_price(const int code)
{
    switch (code)
    {
        case 1: return 4.00;
        case 2: return 4.50;
        case 3: return 5.00;
        case 4: return 2.00;
        case 5: return 1.50;
        default: return 0;
    }
}

int main()
{
    int code = 0;
    int amount = 0;
    scanf("%d %d", &code, &amount);
    
    printf("Total: R$ %.2lf\n", amount * get_price(code));
    
    return 0;
}
