/*

-------------------- PROBLEM ----------------------

Rod 1 = A
Rod 2 = B
Rod 3 = C

n disks = 2

Disk 1 from A to B
Disk 2 from A to C
Disk 1 from B to C

-Shift "n-1" disks form Source(A) to Middle(B)
-Shift one disk from Source(A) to Destination(C)
-Shift "n-1" disk from Middle(B) to Destination(C)

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void Hanoi(int n, int source, int dest, int middle);


void main(){
    
    int h;
    
    printf("Enter the number of disks:\n"); //Get the number of disks in the problem to be solved from the user.
    scanf("%d", &h);
    printf("\nTower of Hanoi solution for %d disks.\n", h);
    
    Hanoi(h, 1, 3, 2); //Find the solution
}



void Hanoi(int n, int source, int dest, int middle){
    //Recursive function to solve the tower of Hanoi problem
    if(n==1){
        //Once the disk has been moved to its final position form the source print the move
        printf("Moved disk %d from %d to %d.\n", n, source, dest);
    }
    else{
        Hanoi(n-1, source, middle, dest);
    
        printf("Moved disk %d from %d to %d.\n", n, source, dest); //print the move that was just completed
    
        Hanoi(n-1, middle, dest, source);

   }
}
