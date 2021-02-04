#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include"dk_tool.h"

int main(void)
{

    int matrix_1[2][2]; // объявление матрицы 3 на 3
    int matrix_2[2][2];

    int a, b; // first matrix
    int x, y; //second matrix
    int n, m; // matrix_sum

    int frst_matrix;
    int scd_matrix;
    int matrix_suma;



    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {
            printf("Pass value of matrix: [%d][%d]", a, b);  // pass of values in 1 matrix
            scanf("%d", &matrix_1[a][b]);
            printf("\n");
        }
    }




    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("Pass value of second matrix: [%d][%d]", x, y);  //pass of values in 2 matrix
            scanf("%d", &matrix_2[x][y]);
            printf("\n");
        }
    }






    printf("\n");

    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 2; b++)
        {

            printf("%d\t", matrix_1[a][b]);   //print pass of values in 1 matrix

        }
        printf("\n");


    }



    printf("    +");
    printf("\n");

    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            printf("%d\t", matrix_2[x][y]);  //print pass of values in 2 matrix
        }
        printf("\n");
    }
    printf("    =\n");
    
    

    printf("%d\n", matrix_sum(matrix_1, matrix_2));
    printf("Function are completed\n");



}
 
