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


int countDigit(int digit, int number)
{
    int count = 0;
    while(number > 0)
    {
        if(number % 10 == digit)
            count++;
        number /= 10;
    }
    return (count);
}

void alldigitFrequency(int number)
{
    short index, count;
    
    index = 0;
    while(index <= 9)
    {
        count = countDigit(index , number);
        if(count)
            printf("Digit %d Frequency is %d Time(s).\n", index, count);
        index++;
    }
    return;
}

int main(void)
{
    int number = checkPositiveNumber("Enter the number: ");
    alldigitFrequency(number);

    return (0);
}