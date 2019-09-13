/*

	Name: R. William Ebenezaraj
	Machine Number: 27
	Roll number: 19CY20030

*/

#include <stdio.h>

int Isprime(int n);

int main()
  {
	int a, b;

	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);
	
	//initializing r to a+1 to satisfy a<r<b

	int r=a+1;
	while (r<b)
	  {
		if (Isprime(r)==1) printf("%d,", r);
		r++;
	  }

	//to erase the last superfluous comma
	printf("\b \n");
  }

int Isprime(int n)
  {
	for (int i=2; i<=n; i++)
	  {
		if (i==n) return 1;
		if (n % i == 0) return 0;
	  }
  }
