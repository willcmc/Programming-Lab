#include <stdio.h>

int f(int A[], int i, int s);

int main()
  {
	int A[10];
	int s;
	int index=0;
	while (index<10)
	{		
		printf("Enter number %d: ", index+1);
		scanf(" %d", &A[index]);
		index++;
	  }

	printf("Enter s: ");
	scanf("%d", &s);

	int flag = f(A, 9, s);

	//printing yes/no based on return val of f
	switch(flag)
	{
		case 1: printf("yes\n"); break;
		case 0: printf("no\n");
	  }
  }

int f(int A[], int i, int s)
  {
	//base case to end recursion
	if (i==0) 
	{		
		if (A[0]==s) return 1;
		else return 0;
	  }

	else if (f(A, i-1, s-A[i])==1) return 1;
	else return (f(A, i-1, s)); 
  }
	
		
