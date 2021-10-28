#include <stdio.h>
#define N 10

void swap(int* massiv, int index_one, int index_two)
{
    int temp = massiv[index_one];
    massiv[index_one] = massiv[index_two];
    massiv[index_two] = temp;
}

void main() {
    /* Вариант №3
    В массиве A(N) каждый элемент равен 0, 1 или 2.
    Переставить элементы массива так, чтобы сначала располагались все нули,
    затем все двойки и, наконец, все единицы(дополнительного массива не заводить).
    */
    int A[N];

    printf("\n randomize with size %d:\n", N);
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 3;
        printf("\n %3d) %d", i, A[i]);
    }
    printf("\n");

    //сортировка в вид 00 22 11
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == 0)
        {
            swap(A, i, index);
            ++index;
        }
    }
    for (int i = index; i < N; i++)
    {
        if (A[i] == 2)
        {
            swap(A, i, index);
            ++index;
        }
    }
    for (int i = 0; i < N; i++)
        printf("\n %3d) %d", i, A[i]);


    printf("\n");
    system("pause");
}