#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], h[10] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
    int length;
    static int i, a;

    scanf("%s", s);
    length = strlen(s);

    for(i = 0; i < length; i++)
    {
        if(s[i] == 'h')
        {
            h[0] = s[i];
            a = i + 1;
            break;
        }
    }
    for(i = a; i < length; i++)
    {
        if(s[i] == 'e')
        {
            h[1] = s[i];
            a = i + 1;
            break;
        }
    }
    for(i = a; i < length; i++)
    {
        if(s[i] == 'l')
        {
            h[2] = s[i];
            a = i + 1;
            break;
        }
    }
    for(i = a; i < length; i++)
    {
        if(s[i] == 'l')
        {
            h[3] = s[i];
            a = i + 1;
            break;
        }
    }
    for(i = a; i < length; i++)
    {
        if(s[i] == 'o')
        {
            h[4] = s[i];
            a = i + 1;
            break;
        }
    }

    if(h[0] == 'h' && h[1] == 'e' && h[2] == 'l' && h[3] == 'l' && h[4] == 'o')
        printf("YES");
    else
        printf("NO");

    return 0;
}
