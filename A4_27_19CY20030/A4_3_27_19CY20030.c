/*

	Name: R. William Ebenezaraj
	Machine Number: 27
	Roll number: 19CY20030

*/

#include <stdio.h>

void pdrom (int n);

int main()
  {
	int n;
	printf("Enter integer: ");
	scanf("%d", &n);

	pdrom(n);
  }

void pdrom (int n)
  {
	int rev = 0;
	int temp = n;
	while (temp>0)
	  {
		rev = 10*rev + (temp % 10);
		temp /= 10;
	  }
	
	if (rev==n) printf("yes\n");
	else printf("no\n");
  }
	

	
