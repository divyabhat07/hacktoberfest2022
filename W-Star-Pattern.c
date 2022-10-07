#include <stdio.h>

void printingStars(int rows)
{
	for (int i = 0; i < rows; ++i)
	{
		printf("*");
	}
}
void printingSpaces(int rows)
{
	for (int i = 0; i < rows; ++i)
	{
		printf(" ");
	}
}

int main()
{
	int rows;

	printf("Enter W Shape Star Pattern Rows = ");
	scanf("%d", &rows);

	printf("Printing W Shape Pattern\n");
	for (int i = 0; i < rows; i++)
	{
		printingStars(i + 1);
		printingSpaces(rows - i - 1);
		printingStars(rows - i + 1);
		printingSpaces(2 * i);
		printingStars(rows - i);
		printingSpaces(rows - i - 1);
		printingStars(i + 1);
		printf("\n");
	}
}
