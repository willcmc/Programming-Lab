#include <stdio.h>

int main()
  {
	int m, n, p;
	printf("Enter m: ");
	scanf("%d", &m);
	
	printf("Enter n: ");
	scanf("%d", &n);
	
	printf("Enter p: ");
	scanf("%d", &p);

	int A[m*n];
	int B[n*p];

	//taking entries into matrix A (mxn)
	int i=0, j=0;	

	while (i<m)
	{	j=0;
		while (j<n)
		{
			printf("Enter A%d%d: ", i+1, j+1);
			scanf(" %d", &A[n*(i)+j]);
			j++;
		  }
		i++;
	  }

	//taking entries into matrix B (nxp)
	int h=0, k=0;

	while (h<n)
	{	k=0;
		while (k<p)
		{
			printf("Enter B%d%d: ", h+1, k+1);
			scanf(" %d", &B[p*(h)+k]);
			k++;
		  }
		h++;
	  }

	
	
	printf("The product matrix is: \n");

	int AxB[m*p];
	int c=0;
	while(c<m*p) {AxB[c]=0; c++;}

	//computing the product

	i=0;
	while (i<m)
	{
		k=0;
		while (k<p)
		{
			j=0;
			while (j<n)
			{
				AxB[p*i+k] += A[n*i+j]*B[p*j+k];
				j++;
			  }
		k++;
		  }
	i++;
	  }

	i=0, j=0;	

	//printing the product
	while (i<m)
	{	j=0;
		while (j<p)
		{
			printf(" %d", AxB[n*(i)+j]);
			j++;
		  }
		i++; printf("\n");
	  }
	
  }

