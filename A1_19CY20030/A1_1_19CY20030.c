/* 
   Name: R. William Ebenezaraj
   Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	int a1, a2, a3, b1, b2, b3;

	printf("Enter a1: ");
	scanf("%d", &a1);

	printf("Enter a2: ");
	scanf("%d", &a2);

	printf("Enter a3: ");
	scanf("%d", &a3);

	printf("Enter b1: ");
	scanf("%d", &b1);

	printf("Enter b2: ");
	scanf("%d", &b2);

	printf("Enter b3: ");
	scanf("%d", &b3);

	//area of triangle formed by points 1, 2 and 3
	int area = (a1*b2-b1*a2+a2*b3-b2*a3+a3*b1-b3*a1);

	//area will be zero if points are collinear
	if (area==0) printf("The points are collinear\n");
	else printf("The points are not collinear\n");

	return 0;
  }	


