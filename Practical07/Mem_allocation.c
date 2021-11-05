#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* allocatearray(int n){
	//This function allocates memory with size n
	//Remember variables with in a function have local scope, so if you return a pointer of a local variable that pointer will not be pointing to anything
	int* array;
	array = (int*) malloc(n * sizeof(int));

	printf("Array of size %d allocated.\n", n);
	return array;
	
}


void fillwithones(int* array, int n){
	int i;
	for(i=0; i<n; i++){
		array[i] = 1; //Sets each element of the array to equal 1
	}
}


void printarray(int* array, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d \n", array[i]); //Prints each element of the array
	}
}

void freearray(int* array){
	free(array); //Unallocated the memory assigned to the array
	printf("Array freed!\n");	
}

int main(){
	int n;
	int* array_main;
	
	printf("Enter the number of elements in the array:\n");
	scanf("%d", &n);
	
	array_main = allocatearray(n); //Allocates the memory for array_main

	fillwithones(array_main, n);
	printarray(array_main, n);
	freearray(array_main);
	array_main = NULL;

	return 0;
}
