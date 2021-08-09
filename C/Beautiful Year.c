#include<stdio.h>

int main()
{
    int y, i, j;
    int p, q, r, s;

    scanf("%d", &y);
    j = y + 1;

    for( ; ; j++)
    {
        if(y < 1000 || y > 9000)
            break;

        i = j;
        p = i % 10;
        i = (i - p) / 10;
        q = i % 10;
        i = (i - q) / 10;
        r = i % 10;
        s = (i - r) / 10;

        if(p != q && p != r && p != s && q != r && q != s && r != s)
        {
            printf("%d", j);
            break;
        }
    }

    return 0;
}
