#include <stdio.h>


int main(void) {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) {
      sum1 += 1/i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {
      /* Insert the same line as above except use sum2 */
	sum2 += 1/i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum1 - sum2;

   printf(" Difference between the two is %f\n",diff);



}

// Sums differ by 0.0007, on paper the two sums are identical. The difference scene in this practical comes from the error accociated with floating point arithmatic.
