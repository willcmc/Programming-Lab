/* 
   Name: R. William Ebenezaraj
   Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	printf("Enter a number between 1 and 99: ");
	int n=0;
	scanf("%d", &n);

	int tens = n/10;
	int ones = n%10;

	
	if (n>=20||n<=10)
	  {
		//printing the tens' place for n>=20
		switch(tens)
		  {
			case 2: {printf("twenty "); break;}
			case 3: {printf("thirty "); break;}
			case 4: {printf("forty "); break;}
			case 5: {printf("fifty "); break;}
			case 6: {printf("sixty "); break;}
			case 7: {printf("seventy "); break;}
			case 8: {printf("eighty "); break;}
			case 9: {printf("ninety ");}
			default : break;
		  }

 		//printing the ones' place
		switch(ones)
		  {
			case 1: {printf("one\n"); break;}
			case 2: {printf("two\n"); break;}
			case 3: {printf("three\n"); break;}
			case 4: {printf("four\n"); break;}
			case 5: {printf("five\n"); break;}
			case 6: {printf("six\n"); break;}
			case 7: {printf("seven\n"); break;}
			case 8: {printf("eight\n"); break;}
			case 9: {printf("nine\n");}
			default : break;
		  }
	  }

	//printing numbers from 11 and 19
	switch(n)
	  {
		case 11: {printf("eleven\n"); break;}
		case 12: {printf("twelve\n"); break;}
		case 13: {printf("thirteen\n"); break;}
		case 14: {printf("fourteen\n"); break;}
		case 15: {printf("fifteen\n"); break;}
		case 16: {printf("sixteen\n"); break;}
		case 17: {printf("seventeen\n"); break;}
		case 18: {printf("eighteen\n"); break;}
		case 19: {printf("nineteen\n");}
		default : break;
	  }
  }

