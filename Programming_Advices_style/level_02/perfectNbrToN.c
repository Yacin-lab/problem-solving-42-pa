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

int isPerfectNumber(int number)
{
    int index;
    int count = 0;

    index = 1;
    while(index < number)
    {
        if(number % index == 0)
            count += index;
        index++;
    }
    return number == count;
}

void printPerfectNumber(int index)
{
    if(isPerfectNumber(index))
        printf("%d \n", index);
}

int main(void)
{
    int number;
    int i;

    number = checkPositiveNumber("Enter the number: ");
    i = 1;
    while(i <= number)
    {
        printPerfectNumber(i);
        i++;
    }
    return (0);
}