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

int checkPalindromeNumer(int number)
{
    return number == reverseNumber(number);
}

int main(void)
{
    int number = checkPositiveNumber("Please Enter the number: ");
    if(checkPalindromeNumer(number))
        printf("Yes , it is a Palindrome number.\n");
    else
        printf("No , it is NOT a Palindrome number.\n");
    return (0);
}