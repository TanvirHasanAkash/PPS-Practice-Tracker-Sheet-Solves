// https://judge.beecrowd.com/en/problems/view/2342

#include <stdio.h>

int main()
{
    int N = 0;
    int P = 0;
    char C = '\0';
    int Q = 0;
    
    scanf("%d", &N);
    scanf("%d %c %d", &P, &C, &Q);
    
    if (C == '+' && N >= P + Q)
    {
        printf("OK\n");
    }
    else if (C == '*' && N >= P * Q)
    {
        printf("OK\n");
    }
    else
    {
        printf("OVERFLOW\n");
    }
    
    return 0;
}
