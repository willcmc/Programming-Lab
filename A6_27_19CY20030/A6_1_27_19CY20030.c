/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include<stdio.h>

int* ADDR (int* p, int i, int j);

int main()
  {
	int A[10][10];
	int i,j;
	printf("Enter i: ");	
	scanf("%d", &i);
	printf("Enter j: ");	
	scanf("%d", &j);

	printf("calculated address: %p", ADDR(&A[0][0], i, j));
	printf("\nactual address: %p\n", &A[i][j]);
  }

int* ADDR (int* p, int i, int j)
  {
	int* addr=((int*)p+i*10+j);
	return addr;
  }
