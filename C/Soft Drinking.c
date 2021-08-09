#include<stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    int drink_volume, lime_slice;
    int drink_toast, lime_toast, salt_toast;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    drink_volume = k * l;
    lime_slice = c * d;

    drink_toast = drink_volume / nl;
    lime_toast = lime_slice;
    salt_toast = p / np;

    if(drink_toast <= lime_toast && drink_toast <= salt_toast)
        printf("%d", drink_toast / n);
    else if(salt_toast <= drink_toast && salt_toast <= lime_toast)
        printf("%d", salt_toast / n);
    else
        printf("%d", lime_toast / n);

    return 0;
}
