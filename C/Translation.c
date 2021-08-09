#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000], t[1000];

    scanf("%s", s);
    scanf("%s", t);

    if(strcmp(strrev(s), t) == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}
