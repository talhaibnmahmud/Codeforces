#include<stdio.h>
#include<string.h>

int main()
{
    long long int n, k;
    scanf("%I64d %I64d", &n, &k);

    if(n % 2 != 0)
        n = n + 1;

    if(k <= (n / 2))
        printf("%I64d", (2 * k) - 1);
    else if(k > (n / 2))
        printf("%I64d", 2 * (k - (n / 2)));

    return 0;
}
