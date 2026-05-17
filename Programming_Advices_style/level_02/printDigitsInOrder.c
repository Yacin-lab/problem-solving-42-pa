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

void printDigitInOrder(int number)
{
    if(number == 0)
        return;
    printDigitInOrder(number / 10);
    printf("%d\n", number % 10);
    
    /*int tmp = number;
    int pow = 1;
    while(tmp /= 10)
        pow *= 10;
    //printf("%d\n", pow);
    while(pow > 0)
    {
        printf("%d\n", (number / pow) % 10);
        pow /= 10;
    }*/
}

int main(void)
{
    int number = checkPositiveNumber("Please Enter the number: ");
    printDigitInOrder(number);
    return (0);
}