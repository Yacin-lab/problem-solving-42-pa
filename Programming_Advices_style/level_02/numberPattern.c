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

void printInvertePattern(int number)
{
    int i = 1;
    while(i <= number)
    {
        int j = 0;
        while(j < i)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(void)
{
    printInvertePattern(checkPositiveNumber("Please Enter the number: "));
    return (0);
}