#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	int matrix_2[4][4];
	int matrix[4][4];
		int x,y,z,r;
		printf("................\n");
		printf("First matrix is:\n");
		printf("................\n");
		for (x = 0; x < 4; x++)
		{
			for (y = 0; y < 4; y++)

			{
				int value;
				matrix[x][y] = 1 + x;
				printf("%d\t", matrix[x][y]);
			}
			printf("\n");
		}
		printf("................\n");
		printf("Second matrix:\n");
		printf("................\n");
       

		

for (z = 0; z < 4; z++)
		{
			
			for (r = 0; r < 4; r++)
			{
				matrix_2[z][r] = 4;
				printf(" %d\t ", matrix_2[z][r]);
			}
			printf("\n");
			
		}
			printf("................\n");
		printf("If we add 2 matrix, we had a new matrix:\n");
			printf("................\n");


}
