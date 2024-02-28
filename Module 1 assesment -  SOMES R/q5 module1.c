#include<stdio.h>
void MatrixMultiplication(int m1[][50], int r1, int c1, int m2[][50], int r2, int c2, int m_res[][50]) {

	int i, j, k, sum = 0;

	if (c1 != r2) {
		printf("Order of Input Matricis is Invalid");
		return;
	}

	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
			sum = 0;
			for (k = 0; k < r1; ++k) {
				sum += *(*(m1 + i) + k) * *(*(m2 + k) + j);
			}
			*(*(m_res + i) + j) = sum;
		}
	}

}

int main() {

	int i, j;
	int r1, c1, r2, c2;
	int m1[50][50], m2[50][50], m_res[50][50];

	printf("Enter Number of Rows in first Matrix: ");
	scanf("%d", &r1);
	printf("Enter Number of columns in first Matrix: ");
	scanf("%d", &c1);

	printf("Enter elements of first matrix: \n");
	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c1; ++j) {
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Enter Number of Rows in second Matrix: ");
	scanf("%d", &r2);
	printf("Enter Number of columns in second Matrix: ");
	scanf("%d", &c2);

	printf("Enter elements of second Matrix: \n");
	for (i = 0; i < r2; ++i) {
		for (j = 0; j < c2; ++j) {
			scanf("%d", &m2[i][j]);
		}
	}
	
	MatrixMultiplication(m1, r1, c1, m2, r2, c2, m_res);

	printf("\nThe Matrix Multiplication : \n");
	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
			printf("%d ", m_res[i][j]);
		}
		printf("\n");
	}

}