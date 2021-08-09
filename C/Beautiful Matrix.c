//Submission successful
#include<stdio.h>

int main()
{
	int bin[5][5];
	int i, j;
	int temp1, temp2, sum1, sum2, count;

	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			scanf("%d", &bin[i][j]);
		}
	}
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(bin[i][j] == 1)
			{
				temp1 = i + 1;
				temp2 = j + 1;
				break;
			}
		}
	}
	if(temp1 < 3)
		sum1 = 3 - temp1;
	else if(temp1 > 3)
		sum1 = temp1 - 3;
	else
		sum1 = 0;

	if(temp2 < 3)
		sum2 = 3 - temp2;
	else if(temp2 > 3)
		sum2 = temp2 - 3;
	else
		sum2 = 0;

	count = sum1 + sum2;
	printf("%d", count);

	return 0;
}
