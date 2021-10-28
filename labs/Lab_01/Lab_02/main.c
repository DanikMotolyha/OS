#include <stdio.h>
#define N 10

void swap(int* massiv, int index_one, int index_two)
{
    int temp = massiv[index_one];
    massiv[index_one] = massiv[index_two];
    massiv[index_two] = temp;
}

void sort(int* massiv, int length) {
    int* counter = massiv;
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (*(counter + i) == 0)
        {
            swap(massiv, i, index);
            ++index;
        }
    }
    for (int i = index; i < N; i++)
    {
        if (*(counter + i) == 2)
        {
            swap(massiv, i, index);
            ++index;
        }
    }
}


void main() {
    /* ������� �3
    � ������� A(N) ������ ������� ����� 0, 1 ��� 2.
    ����������� �������� ������� ���, ����� ������� ������������� ��� ����,
    ����� ��� ������ �, �������, ��� �������(��������������� ������� �� ��������).
    
    ������� ������ ������� � ���� �������, 
    ������� �������� � �������� ���������� ��������� �� ������ � ���������� ��������� �������.
    */
    int A[N];

    printf("\n randomize with size %d:\n", N);
    for (int i = 0; i < N; i++) {
        A[i] = rand() % 3;
        printf("\n %3d) %d", i, A[i]);
    }
    printf("\n");


    //���������� � ��� 00 22 11
    sort(A, N);


    for (int i = 0; i < N; i++)
        printf("\n %3d) %d", i, A[i]);


    printf("\n");
    system("pause");
}