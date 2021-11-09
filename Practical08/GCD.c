#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int GCD_it(int a, int b){
	// Iterativer version of Euclidian algorithm for finding the Greatest Common Denominator
	int temp;
	while(b!=0){
		temp = b;
		b = a%b; //b becomes the remainder of a divided by b this is then repeated until the remainder is zero, then a is return.
		a = temp;
	}
	return a; //At the end of the loop a is now the GCD.
}



int GCD_rec(int a, int b){
	// Recursive version of Euclidian algorithm for finding the Greatest Common Denominator	
	if(b!=0){
	
		return GCD_rec(b, a%b); // If b is not 0 we pass the values back into the function where a now equals 'b' and b now equals 'a mod b'
	}
	
	return a;

}

int main(){
	
	// Define the variables
	int a,b,error;
	
	printf("Please input two positive integers.\n");
	error = scanf("%i %i", &a, &b); //Get how many values were entered and assign the entered values to a & b
	
	if(error != 2){	// Check that 2 values were entered
		printf("Please input 2 positive integers!\n");
		return 1;
	}
	
	if(a <=0 || b <= 0){ // Check that both a and b are positive
		printf("These numbers are not positive!\n");
		return 1;
	}
	
	// Take the inputed values, pass them to the algorithm and print out the results
	printf("Iterative GCD(%d, %d) = %d \n", a, b, GCD_it(a, b));
	printf("Recursive GCD(%d, %d) = %d \n", a, b, GCD_rec(a, b));
}
