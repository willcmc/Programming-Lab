/* 
   Name: R. William Ebenezaraj
   Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	int ddmm=0;
	printf("Enter a date from 2019 in ddmm format: ");
	scanf("%d", &ddmm);

	//extracting the month and date
	int mm=ddmm%100;
	int dd=(ddmm-mm)/100;
	
	//finding the day number in the year
	int daynum=0;

	switch(mm)
	  {
		case 1:  daynum=dd; break;
		case 2:  daynum=31+dd; break;
		case 3:  daynum=31+28+dd; break;
		case 4:  daynum=31+28+31+dd; break;
		case 5:  daynum=31+28+31+30+dd; break;
		case 6:  daynum=31+28+31+30+31+dd; break;
		case 7:  daynum=31+28+31+30+31+30+dd; break;
		case 8:  daynum=31+28+31+30+31+30+31+dd; break;
		case 9:  daynum=31+28+31+30+31+30+31+31+dd; break;
		case 10: daynum=31+28+31+30+31+30+31+31+30+dd; break;
		case 11: daynum=31+28+31+30+31+30+31+31+30+31+dd; break;
		case 12: daynum=31+28+31+30+31+30+31+31+30+31+30+dd; break;
	  }

	//finding the day count in a week and printing day name
	int daycount=daynum%7;
	switch(daycount)
	  {
		case 1: printf("Tuesday\n"); break;
		case 2: printf("Wednesday\n"); break;
		case 3: printf("Thursday\n"); break;
		case 4: printf("Friday\n"); break;
		case 5: printf("Saturday\n"); break;
		case 6: printf("Sunday\n"); break;
		case 0: printf("Monday\n"); break;
	  }
  }
	
