//Submission Successful
#include<stdio.h>

int main()

{
    long long int n, m, a;
    long long int temp1 = 0, temp2 = 0;
    long long int count = 0;
    scanf("%I64d %I64d %I64d", &n, &m, &a);

    if(n % a == 0)
        temp1 = (n / a);
    else
        temp1 = (n / a) + 1;

    if(m % a == 0)
        temp2 = (m / a);
    else
        temp2 = (m / a) + 1;

    count = temp1 * temp2;
    printf("%I64d", count);
    return 0;
}
