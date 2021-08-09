#include<stdio.h>

int main()
{
	int a, b, n, i;
	int Sum1 = 0, Sum2 = 0;
	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);

		if(a > b)
			Sum1++;
		else if(b > a)
			Sum2++;
		else
			continue;
	}
	if(Sum1 > Sum2)
		printf("Mishka");
	else if(Sum2 > Sum1)
		printf("Chris");
	else
		printf("Friendship is magic!^^");

	return 0;
}
