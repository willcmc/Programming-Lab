/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	//Taking input
	printf("Enter a date(mmdd): ");
	int mmdd, mmdd_max, mmdd_min, dd_max, mm_max, dd_min, mm_min;
	scanf("%d", &mmdd);

	//last and earliest date initialized to entered date
	mmdd_max = mmdd_min = mmdd;

	//extracting the month and date
	int dd = mmdd % 100;
	int mm = (mmdd - dd)/100;
	
	char flag='Y';

	while (flag=='Y')
	  {
		printf("Enter more dates(Y/N)?");
		scanf(" %c", &flag);
		
		if (flag=='Y') {printf("Enter a date: "); scanf("%d", &mmdd);}
		else break;
		
		//extracting the month and date from max date
		dd_max = mmdd_max % 100;
		mm_max = (mmdd_max - dd_max)/100;

		//extracting the month and date from min date
		dd_min = mmdd_min % 100;
		mm_min = (mmdd_min - dd_min)/100;

		//extracting month and date from mmdd
		dd = mmdd % 100;
		mm = (mmdd - dd)/100;

		//newly entered date is immediately evaluated and stored if it is a minimum or maximum date		
		if (mm>mm_max) mmdd_max=mmdd;

		if (mm==mm_max && dd>dd_max) mmdd_max=mmdd;

		if (mm<mm_min) mmdd_min=mmdd;

		if (mm==mm_min && dd<dd_min) mmdd_min=mmdd;

	  }

	//extracting the month and date from max date for final printing
	dd_max = mmdd_max % 100;
	mm_max = (mmdd_max - dd_max)/100;

	//extracting the month and date from min date for final printing
	dd_min = mmdd_min % 100;
	mm_min = (mmdd_min - dd_min)/100;

	//printing earliest and latest dates in required format	

	printf("Earliest: ");

	switch(mm_min)
	  {
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); 
	  }

	printf(" %d", dd_min);

	printf("\nLatest: ");
	switch(mm_max)
	  {
		case 1: printf("January"); break;
		case 2: printf("February"); break;
		case 3: printf("March"); break;
		case 4: printf("April"); break;
		case 5: printf("May"); break;
		case 6: printf("June"); break;
		case 7: printf("July"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("October"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); 
	  }

	printf(" %d\n", dd_max);

}
		
