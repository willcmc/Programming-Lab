/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	int N;
	printf("Enter integer:");
	scanf("%d", &N);

	for (int i=1; i<2*N; i++)
	  {
		int row = (i<N)? i : 2*N-i;
		int star=0, space=0;
		while(star<row)
		  {
			printf("*");
			star++;
		  }
		
		space=((2*N-1)-2*row);
		while(space>0)
		  {
			printf(" ");
			space--;
		  }


		star=0;
		if (row==N) row--;
		while(star<row)
		  {
			printf("*");
			star++;
		  }
		printf("\n");
	  }
  }
