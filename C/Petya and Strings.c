#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000], b[1000];
    int length, i;
    scanf("%s", a);
    scanf("%s", b);

    length = strlen(a);
    for(i = 0; i < length; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
            a[i] = 'A' + (a[i] - 'a');
        if(b[i] >= 97 && b[i] <= 122)
            b[i] = 'A' + (b[i] - 'a');
    }

    if(strcmp(a, b) == 0)
        printf("0");
    else if(strcmp(a, b) > 0)
        printf("1");
    else if(strcmp(a, b) < 0)
        printf("-1");

    return 0;
}
