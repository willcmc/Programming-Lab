/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {

	//taking inputs from user
	printf("Enter a number to be square-rooted: ");
	int n;
	scanf("%d", &n);
	
	printf("\nEnter number of digits of accuracy desired: ");
	int k;
	scanf("%d", &k);
	
	//using guess as specified by question
	double guess = 5;

	//difference d is initialized to a non-zero number to facilitate entry into "for" loop
	double d = n;

	
	/*Applying the Babylonian method: 
	  Note that the larger "for" loop has been controlled by "d" typecasted to int, 
	  in order to truncate the superfluous decimal points beyond desired accuracy. 
	*/
	 
	for (; (int) d > 0; )
	  {
		//making guess more accurate using by iterating
		guess = (guess + n/guess)/2;
		
		d = guess - (guess + n/guess)/2;
		
		//achieving the required accuracy, 
		//we raise the difference to k-th power of ten using a "for" loop
		
		for (int i=0; i<k; i++)
		  {
			d *= 10;
		  }
	  }

	printf("\nSquare root of %d is %f", n, guess);
  }
	
