/*

	Name: R. William Ebenezaraj
	Machine Number: 27
	Roll number: 19CY20030

*/

#include <stdio.h>

int factorial(int n);
double power(double n, int k);
double expon(int d, int k);

int main() 
  {
	double d; 
	int k;
	printf("Enter d: ");
	scanf("%lf", &d);

	printf("Enter k: ");
	scanf("%d", &k);

	printf("%lf\n", expon(d, k));
  }

//defining factorial
int factorial(int n)
   {
	if (n<=1) return 1;
	else return n*factorial(n-1);
  }

//defining power
double power(double n, int k)
  {
	double pow=1.0;	
	for (int i=0; i<k; i++)
	  {
		pow *= n;
	  }

	return pow;
  }

//defining expon
double expon(int d, int k)
  {
	double sum=1;
	for (int i=1; i<k; i++)
	  {
		sum += power(d, i)/factorial(i);
	  }
	return sum;
  }
