#include<stdio.h>

int main()
{
    int a, b, c, n;
    int i, sum = 0;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        if((a == 1 && b == 1 && c == 1) || (a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1))
            sum++;
        else
            continue;
    }
    printf("%d", sum);

    return 0;
}
