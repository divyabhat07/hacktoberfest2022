#include <stdio.h>

int main()
{
	int rows;

	printf("Enter Inverted V Shape Star Pattern Rows = ");
	scanf("%d", &rows);

	printf("Printing Inverted V Shape Star Pattern\n");

	for (int i = rows; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		for (int k = 1; k <= 2 * (rows - i); k++)
		{
			printf(" ");
		}
		for (int l = 1; l <= i; l++)
		{
			printf("*");
		}
		printf("\n");
	}
}
