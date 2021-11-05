#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n){
	
	if(n == 0){
		return 1; // if n is 0 sets the value to 1
	}
	
	return n * factorial(n-1); // Computes the factorial of n via recursion
}

double polynomial( int n, int x){
	double sum = 0.0; 
	int i;
	for(i=0; i<=n; i++){
		sum += (double)pow(x,i)/factorial(i); // Computes the sum for x up until the order specified by n
	}
	return sum;
}

int main(){
	// Define variables
	int order, array_size;
	double* term_array;
	int i, x=1;
	
	// Get the order from  user input
	printf("Enter the order of the polynomial:\n");
	scanf("%d", &order);
	//Determine array size
	array_size = order + 1;
	//Create the array of size equal to the order + 1
	term_array = (double *) malloc(array_size * sizeof(double));
	
	printf("The value of e = %0.20f\n", exp(1));

	for(i=0; i < array_size; i++){
		//Calculates e for i and x and stores this in the array "term_array" then computes the difference between e and the estimate
		term_array[i] = polynomial(i,x);
		printf("f[%d] = %0.20f\n", i, term_array[i]);
		printf("The difference between e and our estimate [%d] is %0.20f\n", i, (exp(1) - term_array[i]));
	}
	
	// unallocates the memory used for our array
	free(term_array);
	term_array = NULL;
	

	return 0;

	
}
