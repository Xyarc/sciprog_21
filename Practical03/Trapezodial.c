// Calculating the area under the curve with the Trapezodial methods
#include <stdio.h>
#include <math.h>

int main(void){
	// Function to compute the area under the curve using the trapezodial method. 
	// Where a and b is the range between which you want to compute the area and N is the number of equidistant points between a and b.
	
	//Declaring local variables
	
	double a = 0.0;
	double b = M_PI/3; 
	double N = 11.0;
	double Comp, Area, Diff;
	printf("b=%f\n",b);	

	Diff = (b-a)/N; //Calculate the spacing between points
	
	printf("Diff =%f\n",Diff);

	//Declaring main loop for the calculation
	double i = a + Diff;

	Area = tan(a) + tan(b);// Adds start and endpoints to the sum

	for(i; i<b; i += Diff){  // computes the sum 'f(a) + 2*f(a+diff) +...+ 2*f(a+(N-1)diff) +f(b)' 
		printf("Area = %f\n", Area);
		printf("i = %f\n",i);		
		Area += 2*tan(i); // adds twice the other points to the sum
	}

	Area = (Diff/2)*Area; // multiplies the sum by (b-a)/N

	Comp = Area - log(2); //Compares the Area calculated by the trapezodial method to the analytical solution ln(2)

	printf("Area under the curve equals %f\n",Area);
	printf("Comparing the calculated area to Ln(2) we get a difference of %f\n", Comp);

}
