#include<stdio.h>
#include<string.h>

int main()
{
    char s[200];
    int i, length;
    int C = 0, S = 0;

    scanf("%s", s);
    length = strlen(s);

    for(i = 0; i < length; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            C++;
        else
            S++;
    }
    if(C > S)
    {
        for(i = 0; i < length; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i] = 'A' + (s[i] - 'a');
        }
    }
    else
    {
        for(i = 0; i < length; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = 'a' + (s[i] - 'A');
        }
    }
    printf("%s", s);

    return 0;
}
