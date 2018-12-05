#include <iostream>

int matrix_x[3][2] = {
{ 1, 2 },
{ 3, 4 },
{ 5, 6 }
};

int matrix_y[3][4] = {
{ 7, 8, 9, 10 },
{ 11, 12, 13, 14 }
};

int matrix_z[3][4];

int main(){
	//nullify Matrix_Z
	for(int i = 0; 3 > i; i++){
		for(int j = 0; 4 > j; j++){
			matrix_z[i][j] = INT_MIN;
		}
	}
	
	//print Matrix X
	printf("Matrix X\n");
	for(int i = 0; 3 > i; i++){
		for(int j = 0; 2 > j; j++){
			printf("%d\t", matrix_x[i][j]);
		}
		printf("\n");
	}
	
	//print Matrix Y
	printf("\nMatrix Y\n");
	for(int i = 0; 2 > i; i++){
		for(int j = 0; 4 > j; j++){
			printf("%d\t", matrix_y[i][j]);
		}
		printf("\n");
	}
	
	//Calculate and Print Matrix Z
	printf("\nMatrix Z\n");
	int y;
	for(int i = 0; 3 > i; i++){
		for(int j = 0; 1 > j; j++){
			for(int k = 0; 1 > k; k++){
				for(int l = 0; 4 > l; l++){
					matrix_z[0][y] =
					(matrix_x[i][j] * matrix_y[k][l]) +
					(matrix_x[i][j+1] * matrix_y[k+1][l]);
					y++;
				}
			}
		}
	}
	
	for(int i = 0; 3 > i; i++){
		for(int j = 0; 4 > j; j++){
			printf("%d\t", matrix_z[i][j]);
		}
		printf("\n");
	}
}

/*Explanation: This is a very advanced in depth analysis of 2d arrays which includes on how arrays accessing their variables
in the memory and how they behave thru the entire setup. I prefer explaining it by person or chat as this will have a very long
explanation regarding the matrix z array. But overall what I did here is multiplying the Matrix X to Y and results in matrix z.
