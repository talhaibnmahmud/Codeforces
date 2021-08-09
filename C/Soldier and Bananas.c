#include<stdio.h>

int main()
{
    int k, n, w;
    int i, temp = 0;
    scanf("%d %d %d", &k, &n, &w);

    for(i = 1; i <= w; i++)
        temp =  temp + (i * k);

    if(temp > n)
        printf("%d", temp - n);
    else
        printf("0");

    return 0;
}
