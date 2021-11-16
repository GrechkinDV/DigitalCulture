#include <stdio.h>
#include <gtest/gtest.h>

matrix12[2][2];

void multiply_matrix(int matrix1[2][2], int matrix2[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrix12[i][j] = 0;
            for (int k = 0; k < 2; k++)
            {
                matrix12[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

TEST(MatrixTest, HandlesPositiveInput)
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{1, 2}, {3, 4}};
    int matrix12_test[2][2] = {{7, 10}, {15, 22}};
    EXPECT_EQ(multiply_matrix(matrix1, matrix2), matrix12_test);
}

int main()
{
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{1, 2}, {3, 4}};
    multiply_matrix(matrix1, matrix2);

    for (int i = 0; i < 2; i++)
    {
        printf("%d %d \n", matrix12[i][0], matrix12[i][1]);
    }
}
