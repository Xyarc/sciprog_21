// Calculating the area under the curve with the Trapezodial methods
#include <stdio.h>
#include <math.h>

//Define TanArray  as Global Variable (Bad practice but says to do so in Practical)
float TanArray[13];

// Define a function to convert degrees to Radians
float DegtoRad(float deg){
	return deg*(M_PI/180);
}

// Defining the Trapizodial rule as a function
float Traprule(int N){
	//Declaring Variables
	float Area;
	int i;
	
	//Add start and end points 
	Area = TanArray[0] + TanArray[N];
	
	for(i=1; i<N; i++){

		Area += 2*TanArray[i]; // Add points between start and end

	}
	

	Area = Area*((DegtoRad(60.0)-0.0)/(2*N));

	return Area; // Pass calculated area out of function
}


int main(void){

	// Function to compute the area under the curve using the trapezodial method. 
	// Where a and b is the range between which you want to compute the area and N is the number of equidistant points between a and b.
	
	//Declaring local variables
	 
	int N=12, i;
	float Comp, Area, deg;

	//Generate the deg from 0 to 60 then store tan(x) in an array
	for(i=0; i<=N; i++){

		deg = i*5.0;

		TanArray[i] = tan(DegtoRad(deg)); //Calculate Tan(x) and store in the TanArray

		printf("TanArray[%d\n] = %f\n", i, TanArray[i]);
	}

	Area = Traprule(N); //Find the area using the function version of Trap Rule

	Comp = Area - log(2); //Compares the Area calculated by the trapezodial method to the analytical solution ln(2)

	printf("Area under the curve equals %f\n",Area);
	printf("Comparing the calculated area to Ln(2) we get a difference of %f\n", Comp);

}
