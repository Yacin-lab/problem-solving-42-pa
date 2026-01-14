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

int sumOfDigits(int sum, int number)
{
    if(number == 0)
        return (sum);
    sum += number % 10;
    sumOfDigits(sum, number / 10);

    /*while(number > 0)     // solution using while loop
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
    */
}

int main(void)
{
    int sum;

    sum = sumOfDigits(0, checkPositiveNumber("Enter the number: "));
    printf("%d\n", sum);
    return (0);
}