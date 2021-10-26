#include <stdio.h>
#include <math.h>

void MatMulti(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q]){
	
	// Preformance Matrix multiplication
	
	int i, j, k;

	// Preform Matrix Multiplication to find C
	
	for(i=0; i<n; i++){
		
		for(j=0; j<q; j++){
			
			for(k=0; k<p; k++){
			
				C[i][j] = C[i][j] + A[i][k]*B[k][j]; // Matrix multiplication A[i][k]*B[k][j] then is added to the appropriate entry of C[i][j]
			}
		}

	}

}
	
