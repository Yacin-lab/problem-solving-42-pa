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

int main(void)
{
    int number;

    number = checkPositiveNumber("Enter the number: ");
    if(isPerfectNumber(number))
        printf("%d is perfect number.\n", number);
    else
        printf("%d is not perfect number.\n", number);
    return (0);
}