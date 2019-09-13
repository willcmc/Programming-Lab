/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int split(int A[]);

int main()
  {
	int A[10];
	int i=0;
	
	//taking inputs from user
	while (i<10)
	  {
		printf("Enter number %d: ", i+1);
		scanf(" %d", &A[i]);
		i++;
	  }

	//printing the return value of split
	printf("%d\n", split(A));
  }

int split(int A[])
  {
	int lsum, rsum;
	int i=0, t;

	//testing both sides at each i<=8
	while (i<=8)	
	  {
		lsum=rsum=0;

		//summing the left side
		t=0;
		while (t<=i)
		  {
			lsum+=A[t];
			t++;
		  }


		//summing the right side
		t=i+1;
		while (t<=9)
		  {
			rsum+=A[t];
			t++;
		  }


		//comparing both sides for present i

		if (lsum==rsum) return i;
		else i++;
	  }

	return -1;
  }
