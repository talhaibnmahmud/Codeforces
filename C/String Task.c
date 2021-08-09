//Submission Successful
#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int i, len;
    scanf("%s", &string);

    len = strlen(string);
    for(i = 0; i < len; i++)
    {
        if (string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117 || string[i] == 121)
            continue;
        else if( string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 89 )
            continue;
        else if(string[i] >= 97 && string[i] <= 122)
            printf(".%c", string[i]);
        else
            printf(".%c", string[i] + 32);
    }
    return 0;
}
