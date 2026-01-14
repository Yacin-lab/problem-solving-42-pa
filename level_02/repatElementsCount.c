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

// Fill an integer array with user input
// buff   : array to fill
// size   : number of elements
void getElements(int *buff, int size)
{
    int i = 0;

    while(i < size)
    {
        printf("Element [%d] : ", i + 1);
        scanf(" %d", &buff[i]);
        i++;
    }
}

// Count how many times nbr appears in the array
// buff : integer array
// size : number of elements
// nbr  : number to search for
int NumberOfRepeat(int *buff, int size, int nbr)
{
    int count = 0;
    int i = 0;

    while(i < size)
    {
        if(buff[i] == nbr)
            count++;
        i++;
    }
    return count;
}

// Print elements of buffer
void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(void)
{
    int buff[100];
    int size;
    int SearchNumber;

    size = checkPositiveNumber("Enter the number of elements: ");

    printf("\nEnter array elements:\n");
    getElements(buff, size);

    SearchNumber = checkPositiveNumber("\nEnter the number you want to check: ");

    printf("\nOriginal array: ");
    printArray(buff, size);

    printf(
        "\n%d is repeated %d time(s)\n",
        SearchNumber,
        NumberOfRepeat(buff, size, SearchNumber)
    );
    
    return (0);
}