#include <stdio.h>
#include <math.h>

int main(void){
	
	
	int n=5, p=3, q=4; //Setting matrix size variables
	
	double A[n][p]; // Declaring 2-D static arrays
	double B[p][q];
	double C[n][q];

	int i, j, k;

	// Initializing A, B, C matricies
	
	for( i=0; i<n; i++){
		for(j=0; j<p;j++){
			
			A[i][j] = i+j;
		
		}
	}

	for(i=0; i<p; i++){
	
		for(j=0; j<q; j++){
	
			B[i][j] = i - j;
		} 
	
	}
	// C is initialised with zeros to avioid calculation issues
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			C[i][j] = 0.0;
		}
	}


	// Preform Matrix Multiplication to find C
	
	for(i=0; i<n; i++){
		
		for(j=0; j<q; j++){
			
			for(k=0; k<p; k++){
			
				C[i][j] = C[i][j] + A[i][k]*B[k][j]; // Matrix multiplication A[i][k]*B[k][j] then is added to the appropriate entry of C[i][j]
			}
		}

	}

	//Print out the Matrix A
	printf("\n The matrix A: \n\n");
	for(i=0; i<n; i++){
		for(j=0; j<p; j++){
			printf("%3.0f", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//Print out the Matrix B
	printf("\n The matrix B: \n\n");
	for(i=0; i<p; i++){
		for(j=0; j<q; j++){
			printf("%3.0f", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//Print out the Matrix C
	printf("\n The matrix C: \n\n");
	for(i=0; i<n; i++){
		for(j=0; j<q; j++){
			printf("%3.0f", C[i][j]);
		}
		printf("\n");
	}
	printf("\n");




}
	
