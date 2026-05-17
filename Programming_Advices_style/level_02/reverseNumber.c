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

int reverseNumber(int number)
{
    int digit;
    int reverse = 0;
    while(number > 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }
    return (reverse);
}

int main(void)
{
    int rev;
    rev = reverseNumber(checkPositiveNumber("Enter the number: "));
    printf("Reverse is: %d\n", rev);
    return (0);
}