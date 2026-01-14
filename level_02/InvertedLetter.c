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

void invertedLetterrPattern(int number)
{
    int c = 'A' + number - 1;
    while(number >= 1)
    {
        int j = 0;
        while(j < number)
        {
            printf("%c", c);
            j++;
        }
        printf("\n");
        c--;
        number--;
    }
}

int main(void)
{
    invertedLetterrPattern(checkPositiveNumber("Please Enter the number: "));
    return (0);
}