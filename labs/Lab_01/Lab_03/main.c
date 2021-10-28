#include <stdio.h>
#define M 10
#define N 10
void main() {
    /* Вариант №3
    Массив размерностью MxN. 
    Необходимо каждый элемент строки разделить на наибольший элемент строки.
    */
    int X[M][N];

    printf("\n randomize with size %d:\n", N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            X[i][j] = rand() % 25;
            printf("%3d ", X[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //поиск наибольшего элемента
    int max = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            if (X[i][j] > max)
                max = X[i][j];
        printf("max %d: %3d\n", i, max);
        //деление всех элементов строки на наибольший
       for (int j = 0; j < N; j++)
           X[i][j] /= max;
        max = 0;
    }

    printf("after task\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", X[i][j]);
        }
        printf("\n");
    }
            
    system("pause");
}