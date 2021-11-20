#include <math.h>
#include <stdio.h>
#include <stdlib.h>
//Include custom header file
#include "magic_square.h"

#define MAX_FILE_NAME 100

int getlines(char filename[MAX_FILE_NAME]);


int main(){

    FILE *f; //Define the file information as a pointer
    char filename[MAX_FILE_NAME]; //define the filename
    printf("Enter the file name: \n");
    scanf("%s", filename);//Get the filename from user input

    f = fopen(filename, "r");

    int n = getlines(filename);
    
    /* This block is used for manual input of the magic square size */
    //int n;
    //printf("Enter the size of the square:\n");
    //scanf("%d", &n);
    
    int i;
    int ** magicsquare = malloc(n * sizeof(int)); //Define and Allocate matrix of pointers of size given by the user input

    for(i=0; i<n; i++){
        magicsquare[i] = malloc(n* sizeof(int));

    }
    
    int j;
    for(i = 0; i<n; i++){
        //printf("Enter the elements in row #%d, seperated by blanks and/or linebreaks:\n", i+1);
        for(j=0; j<n; j++){
            //scanf("%d", &magicsquare[i][j]); // this line gets the magic square from user input
            fscanf(f, "%d", &magicsquare[i][j]); //fscanf reads the information from the file and not from the user
        }
    }
    
    printf("The square %s macgic.\n", isMagicSquare(magicsquare, n) ? "is" : "is NOT" );
    
    for(i=0; i<n; i++){
        free(magicsquare[i]);
    }
    free(magicsquare);
    
    fclose(f);
    return 0;
}

int getlines(char filename[MAX_FILE_NAME]){

    FILE *fp; // Define the file information as a pointer
    fp = fopen(filename, "r"); //Read the informaiton in the file

    int chread;
    int count = 0;
    while((chread = fgetc(fp)) != EOF){ //Run the loop until the end of file is reached
        if(chread == '\n'){ //If there is a line break add one to the line counter
            count ++;
        }
    }

    printf("No. of lines %d\n", count);
   
    fclose(fp);

    return count;



}
