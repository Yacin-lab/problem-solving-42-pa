#include <stdio.h>

int checkPositiveNumber(char *string)
{
    int number;
    do {
        printf("%s", string);
        scanf("%d", &number);
    } while(number <= 0);
    return (number);
}

void invertedNumberPattern(int number)
{
    while(number >= 1)
    {
        int j = 0;
        while(j < number)
        {
            printf("%d", number);
            j++;
        }
        printf("\n");
        number--;
    }
}

int main(void)
{
    short number = checkPositiveNumber("Please Enter the number: ");
    invertedNumberPattern(number);
    return (0);
}