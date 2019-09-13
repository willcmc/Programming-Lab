/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	int a=1, b=1, term, n;	
	printf("Enter n: ");
	scanf(" %d", &n);	

	printf("%d, %d, ", a, b);
	
	for (int i=0; i<n-2; i++)
	  {
		term = a + b;
		printf("%d", term);
		
		//assigning new values to a and b for next iteration		
		a=b;
		b=term;
		
		//to print commas after every term except the last one
		if (i!=n-3) printf(", ");
	  }
	printf("\n");
  }
