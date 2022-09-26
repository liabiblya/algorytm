
#include <stdio.h>
#include <stdlib.h>

void swap( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
} 

void bubbleSort(int *arr, size_t m, size_t n) 
{
    //испытываю сложности с ДЗ. Так и не поняла как написать для двумерного массива сортировку
	return;
}

int main(const int argc, const char** argv)
{
    const int col = 3;
    const int row = 3;
    int arr[row][col] = {};
    printf("До сортировки: ");

    for (int i = 0; i < col; i++)
    {
         for (int j = 0; j < row; j++)
         {
            printf("%d ", arr[i][j]= rand() % 10);
         }
    }

    printf("\nПосле сортировки: ");


   


    return 0;
}