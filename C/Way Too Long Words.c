#include<stdio.h>
#include<string.h>

int main()
{
    char word[100];
    int n, i, len;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &word);
        len = strlen(word);
        if (strlen(word) > 10)
        {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }
    return 0;
}
