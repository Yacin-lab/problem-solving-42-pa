#include <stdio.h>

// Ask the user for a positive number
// Keeps asking until the number > 0
int checkPositiveNumber(char *message)
{
    int number;
    do {
        printf("%s", message);
        scanf("%d", &number);
    } while(number <= 0);
    return (number);
}

void getElements(int *buff, int number)
{
    int i = 0;
    while(i < number)
    {
        printf("Element [%d] : ", i + 1);
        scanf(" %d", &buff[i]);
        i++;
    }
    buff[i] = '\0';
}

int checkNumber(int *buff, int nbr)
{
    int count = 0;
    int i = 0;

    while(buff[i])
    {
        if(buff[i] == nbr)
            count++;
        i++;
    }
    return count;
}

int main(void)
{
    int buff[100];
    int NumberOfElements = checkPositiveNumber("Enter the number of elements: ");
    int SearchNumber;
    int NumberOfRepeat;

    printf("\nEnter array elements:\n");
    getElements(buff, NumberOfElements);
    SearchNumber = checkPositiveNumber("\nEnter the number you want to check: ");
    NumberOfRepeat = checkNumber(buff, SearchNumber);
    // print original array
    // print number of repeat
    printf("\n%d is repeated %d time(s)\n", SearchNumber, NumberOfRepeat);
    
    return (0);
}