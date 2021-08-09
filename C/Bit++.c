#include<stdio.h>

int main()
{
	char bits[5];
	int n, i, bit = 0;

	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%s", bits);

		if(bits[0] == 'X')
		{
			if(bits[1] == '+')
				bit++;
			else
				bit--;
		}
		else
		{
			if(bits[0] == '+')
				bit++;
			else
				bit--;
		}
	}

	printf("%d", bit);

	return 0;
}
