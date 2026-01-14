#include <stdio.h>

void ft_sort(int **tab, int *size)
{
    // *size --> howa pointer to integer
    // **tab --> howa pointer to pointer to integer
    //
    // daba ymkan li nwsal l array li f main hka: (*tab)
    // o ymkan li nwsal lelements f array haka: (*tab)[i]
    int tmp;
    int i;
    
    // Bubble sort
    while(*size > 1)
    {
        i = 0;
        while(i < *size - 1)
        {
            if((*tab)[i] > (*tab)[i + 1])   // nefs lhaja: (*tab)[i] == array[i]
            {
                tmp = (*tab)[i];
                (*tab)[i] = (*tab)[i + 1];
                (*tab)[i + 1] = tmp;
            }
            i++;
        }
        (*size)--;      // ila ktbti hka *size-- ghadi na9as mn pointer machi valeur
    }
}

int main(void)
{
    int array[5] = {2, 5, 4, 3, 1};
    int size = 5; 
    int *p = array;     // p pointer 3la awal element f array li howa 2. array == &array[0]
    
    ft_sort(&p, &size);
    // sifat address dyal pointer p 
    // 3ndi p kaypointi 3la array of int    --> p == &array[0]
    // 
    // ft_sort katsta9blo hka int **tab
    // daba wla tab kaypointi 3la p         --> tab == &p
    // owla *tab kaypointi 3la array        --> *tab == p
    // owla (*tab)[i] kaywsalni lelements of array    --> (*tab)[i] == array[i]
    
    int i = 0;
    while (i < 5)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}
