/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	int a;
	printf("Enter a: ");
	scanf("%d", &a);
	
	int sum;

	printf("Enter coefficient of 1: ");
	scanf("%d", &sum);

	int power=1, flag;

	printf("Enter more co-efficient? ");
	scanf(" %d", &flag);

	while(flag!=0)
	  {
		int temp;
		printf("Enter co-efficient of x to the power %d: ", power);
		scanf("%d", &temp);
		
		//computing the running term
		int count=0;
		while(count<power)
		  {
			temp *= a;
			count++;
		  }
	
		sum += temp;

		printf("Enter more co-efficient? ");
		scanf(" %d", &flag);

		power++;
	  }

	printf("\n%d\n", sum);

  }
