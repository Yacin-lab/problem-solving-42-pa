#include <stdio.h>

void PrintTableHeader(void);
void PrintMultiplicationTable(void);
void columsSeperator(int num);

int main(void)
{
	PrintMultiplicationTable();
	printf("\n");

	return (0);
}

void PrintMultiplicationTable(void)
{
	PrintTableHeader();
	int i, j;

	i = 1;
        while(i <= 10)
        {
                columsSeperator(i);
                j = 1;
                while(j <= 10)
                {
                        printf("\t%d", i * j);
                        j++;
                }
                printf("\n");
                i++;
        }
}

void columsSeperator(int num)
{
	if(num > 9)
		printf("%d   |", num);
	else
		printf("%d    |", num);
}

void PrintTableHeader(void)
{
	int i;

	printf("\n\t\t\tMultiplication Table From 1 to 10\n\n");

        i = 1;
        while(i <= 10)
        {
                printf("\t%d", i);
                i++;
        }
        printf("\n___________________________________________________________________________________\n");
}
