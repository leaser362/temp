#include <stdio.h>
#include <math.h>
int main()
{
	int n,count;
	int i,ii;
	count = 0;
	printf("Add n:");
	scanf_s("%d", &n);
	if (n <= 0)
		printf("\nPlease, add a positive number");
	else
	{
		printf("All the prime numbers than is not greater than n: \n");
		for (i = 1; i <= n; i++)
		{
			for (ii = 2; ii <= sqrt(i); ii++)
			{
				if (i % ii == 0)
				{

				}
			}
		}
	}
	return 0;
}

