#include <stdio.h>
#include <math.h>

int is_prime(int number)
{
	int i;
    int half_number;

    half_number = round(number/2.0);
    i = 2;
    while (i <= half_number)
    {
        if (number % i != 0)
            i++;
        else
            return (0);
    }
    return (1);
}

int check_positive_number(char *string)
{
	int number;
	do {
		printf("%s", string);
		scanf("%d", &number);
	} while(number <= 0);
	return (number);
}

void print_prime_number(int number)
{
	int index;
	
	printf("Prime Numbers from 1 To %d is:\n", number);

	index = 1;
	while(index <= number)
	{
		if(is_prime(index))
			printf("%d\n", index);
		index++;
	}
}

int main(void)
{
	print_prime_number(check_positive_number("Enter the number: "));
	return 0;
}
