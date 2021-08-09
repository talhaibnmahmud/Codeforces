#include<stdio.h>

int main()
{
	int t, i, n;
	scanf("%d", &t);

	for(i = 0; i < t; i++)
	{
		scanf("%d", &n);

		if(n < 7)
			printf("%d\n", 1);
		else
			printf("%d\n", (n / 7) + 1);
	}

	return 0;
}
