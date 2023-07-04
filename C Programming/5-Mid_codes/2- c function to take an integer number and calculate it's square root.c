#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double sqrt_root (double x);
int main() {
	double num ;
	float SQ;
	 printf("Enter integer number :");
	 scanf("%lf",&num);
	 SQ=sqrt_root(num);
printf("sqrt_root = %0.4lf",SQ);
    
}

double sqrt_root (double y)
{
    double b;
    b=sqrt(y);
    return b;
}