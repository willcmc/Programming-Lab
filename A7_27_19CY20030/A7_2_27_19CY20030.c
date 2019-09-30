/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
	Machine no. 27
*/

#include<stdio.h>

struct matrix{int M[4][4];};

struct matrix MatMul(struct matrix *p, struct matrix *q);

int main()
  {
	struct matrix A, B, C, D[2];
	
	int q=0;
	while(q<2)
	  {
		printf("Matrix %d:\n", q+1);
		int i=0, j=0;
		while(i<4)
		  {
			j=0;
			while(j<4)
			  {
				printf("Enter element (%d,%d):", i+1, j+1);
				scanf("%d", &D[q].M[i][j]);
				j++;
			  }
			i++;
		  }
		q++;
	  }
	A=D[0];
	B=D[1];

	struct matrix *pA=&A;
	struct matrix *pB=&B;

	C=MatMul(pA, pB);

	printf("Matrix C:\n");
	int i=0, j;
	while(i<4)
	  {
		j=0;
		while(j<4)
		  {
			printf("  %d  ", C.M[i][j]);
			j++;
		  }
		printf("\n");
		i++;
	  }

  }

struct matrix MatMul(struct matrix *pA, struct matrix *pB)
  {
	int i=0, j=0;
	struct matrix C;

	while(i<4)
	  {
		j=0;
		while(j<4)
		  {	
			int h=0;
			C.M[i][j]=0;
			while(h<4)
			  {
				C.M[i][j]+=(pA->M[i][h])*(pB->M[h][j]);
				h++;
			  }
			j++;
		  }
		i++;
	  }
	return C;
  }
	
