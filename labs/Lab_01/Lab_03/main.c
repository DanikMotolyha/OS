#include <stdio.h>
#define M 10
#define N 10
void main() {
    /* ������� �3
    ������ ������������ MxN. 
    ���������� ������ ������� ������ ��������� �� ���������� ������� ������.
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

    //����� ����������� ��������
    int max = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++)
            if (X[i][j] > max)
                max = X[i][j];
        printf("max %d: %3d\n", i, max);
        //������� ���� ��������� ������ �� ����������
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