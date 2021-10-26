//Libraries
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Define both methods of generating the nth value of the Fibonacci sequence
int Fibonacci(int n){
	//Function to calculated the value of the n-th entry in the Fibonacci sequence.
	//This function computes the Fibonnaci sequence by recursively passing the function back to itself until the entire sequence has been computed to the nth value
	int Value;
	
	if(n==0){ // Handles the case where n = 0 and returns zero
		return 0;
	}
	if(n==1){ // Handles the case where n = 1 and returns 1
		return 1;
	}
	Value = Fibonacci(n-1)+ Fibonacci(n-2);
	
	//printf("The Fibonnaci sequence is:\n");
	//printf("%d \n", Value);
	
	return Value;	
}

int fibo(int *a, int *b){
	// Practical required function
	// Passes the function the pointers a & b
	// Define variable to store next value of the sequence
	int next;
	// Compute the next value
	next = *a + *b;
	*a = *b; // Reassign a to be equal to b
	*b = next; // Reassign b to be equal to the computed next value of the sequence	
}

int main(void){
	
	// Define variables
	int n;
	// n1 and n2 are used to hold the previous and current values of the Fibonnacci sequence respectively. 
	int n1 = 0;
	int n2 = 1;

	//Ask the user to input a value to pass to the function
	printf("Enter a positive integer for n: \n");
	scanf("%d", &n);
	
	// If statement to catch the case where n < 0 from user input and if so print an error and exit the program.
	if (n<1){

		printf("Number less than 1\n");
		exit(1);
	}

	printf("The Fibonnaci sequence is: \n");
	printf("%d, ",n1);
	
	int i;
	for (i =1; i <= n; i++){
	
		fibo(&n1, &n2);
		printf("%d\n", n1);
	}
	//Testing recursive method vs practical demostration
	//printf("\n");	
	//printf("\n %d", Fibonacci(n));


	return 0;
}
