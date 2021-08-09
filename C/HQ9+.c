#include<stdio.h>
#include<string.h>

int main()
{
	char p[1000];
	int i, len, x = 0;
	scanf("%s", &p);
	len = strlen(p);

	for(i = 0; i < len; i++)
	{
		if(p[i] < 33 || p[i] > 126)
			continue;
		else if(p[i] == 57 || p[i] == 72 || p[i] == 81)
			{
				x = 1;
				printf("YES");
				break;
			}
		else
			{
				x = 0;
			}
	}
	if(x == 0)
		printf("NO");

	return 0;
}
