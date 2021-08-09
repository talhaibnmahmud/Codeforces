#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, count = 0;

    scanf("%s", s);

    for(i = 1; i < strlen(s); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            count++;
    }

    if(count == strlen(s) - 1)
    {
        for(i = 0; i < strlen(s); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
                s[i] = s[i] & 95;
            else if(s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] | 32;
        }
    }

    printf("%s", s);

    return 0;
}


