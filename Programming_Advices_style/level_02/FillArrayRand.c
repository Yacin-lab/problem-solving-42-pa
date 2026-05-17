#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int randomNumber(int start, int end)
{
    return (rand() % (end - start + 1) + start);
}

void fillArrayRand(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        arr[i] = randomNumber(1, 100);
    }
}

// Print elements of array
void printArray(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void)
{
    int arr[100];
    int size;
    srand((unsigned)time(NULL));
    size = checkPositiveNumber("Enter the number of elements: ");
    fillArrayRand(arr, size);
    printf("\nArray Elements: ");
    printArray(arr, size);

    return (0);
}