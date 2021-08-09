//Submission successful
#include<stdio.h>

int main()
{
    int k, n, i, array[50] = {0};
    int count = 0, temp = 0;
    scanf("%d %d", &n, &k);
    for(i = 1; i <= n; i++)
    {
        scanf("%d", &array[i]);
    }
    temp = array[k];
    for(i = 1; i <= n; i++)
    {
        if(array[i] != 0 && array[i] >= temp)
            count++;
    }
    printf("%d", count);
    return 0;
}
