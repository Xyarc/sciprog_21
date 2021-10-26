#include <stdio.h>
#include <math.h>

double ArcTan_Mac(const double x, const double delta){
	// Computing Arctan using an approximation to the Maclaurin Series
	// Declaring variables need in the calculation
	double arcTan = 0;
	double elem, val;
	int n=0;
	
	// While loop to compute the Maclaurin Series
	do{
	
	val = 2*n+1;
	
	elem = pow(x, val)/val;
	
	arcTan += elem;
	
	n++;
	
	} while(fabs(elem) >= delta); //Runs loop until the accuracy  has reached the user defined precision
	
	return arcTan;

}


double ArcTan_Log(const double x){
	// Computing Arctan using the natural logarithims	
	return (log(1+x) - log(1-x))/2;

} 

int main(void){
	
	// Defines the precision variable then gets user input and stores the value.
	double prec;
	printf("Enter precision for the Maclaurin series:\n");
	scanf("%lf", &prec);
	
	// Similarly defining the bounds of the computation from user input and storing the variables
	double begin, end;
	
	printf("Enter the start and finish points for x:\n");
	scanf("%lf, %lf", &begin, &end);
	
	//Storing and calculateing the size of the lists used to store ArcTan
	double a = ((fabs(begin) + fabs(end))/(prec) + 1.0);
	int asize =a;
	
	double TanMac[asize];
	double TanLog[asize];
	

	// Defining loop variables
	double i;
	int j =0;

	for(i = begin; i > end; i+=prec){
	// For loop to caluclate over the interval defined by the user then store the values in a list; Then print out the results
	TanMac[j] = ArcTan_Mac(i, prec);
	TanLog[j] = ArcTan_Log(i);
	
	printf("The difference between Maclaurin series[%.3lf] and Log[%.3lf] is %.10lf.\n", i, i, fabs(TanMac[j] - TanLog[j]));
	j++;

	}
	
	return 0;
	

}
