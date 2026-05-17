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

void printLetterPattern(int number)
{
    int i = 65;
    while(i <= 65 + number - 1)  // 65 = A   &   65 + number - 1 = last letter
    {
        int j = 0;
        while(j < i - 65 + 1)   // j < 1    j < 2   j < 3   ...
        {
            printf("%c", i);
            j++;
        }
        printf("\n");
        i++;
    }
}

int main(void)
{
    printLetterPattern(checkPositiveNumber("Please Enter the number: "));
    return (0);
}