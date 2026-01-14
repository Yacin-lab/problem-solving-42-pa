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

void PrintDigits(int number)
{
    if(number == 0)
        return;
    printf("%d\n", number % 10);
    PrintDigits(number / 10);
}

int main(void)
{
    PrintDigits(checkPositiveNumber("Enter the number: "));
    return (0);
}