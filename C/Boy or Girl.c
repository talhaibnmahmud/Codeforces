#include <stdio.h>
#include<string.h>

void removeDuplicates(char * str);
void removeAll(char * str, const char toRemove, int index);


int main()
{
    char str[100];
    char new_str[100];

    gets(str);

    removeDuplicates(str);

    strcpy(new_str, str);
    if(strlen(new_str) % 2 == 0)
        printf("CHAT WITH HER!");
    else
        printf("IGNORE HIM!");

    return 0;
}


void removeDuplicates(char * str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        removeAll(str, str[i], i + 1);
        i++;
    }
}

void removeAll(char * str, const char toRemove, int index)
{
    int i;

    while(str[index] != '\0')
    {
        if(str[index] == toRemove)
        {
            i = index;
            while(str[i] != '\0')
            {
                str[i] = str[i + 1];
                i++;
            }
        }
        else
        {
            index++;
        }
    }
}
