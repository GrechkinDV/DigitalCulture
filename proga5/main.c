#include <stdio.h>

int main()
{
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    printf("%d %d %d\n", arr[3], arr[4], arr[5]);
    printf("%d\n", arr[6]);

    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{1, 0}, {0, 1}};
    int matrix12[2][2];
    matrix12[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
    matrix12[0][1] = matrix1[0][0] * matrix2[0][1] + matrix1[0][1] * matrix2[1][1];
    matrix12[1][0] = matrix1[1][0] * matrix2[0][0] + matrix1[1][1] * matrix2[1][0];
    matrix12[1][1] = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];

    printf("%d %d \n%d %d", matrix12[0][0], matrix12[0][1], matrix12[1][0], matrix12[1][1]);
}
