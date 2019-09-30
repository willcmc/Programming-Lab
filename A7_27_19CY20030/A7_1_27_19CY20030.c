/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030	
	Machine no. 27
*/

#include<stdio.h>
#include<string.h>

struct AcadRecord 
  {
	char name[100];
	char roll[10];
	int score;
  };

void FindTop(struct AcadRecord[]);

int main()
  {
	struct AcadRecord record[5];
	char bin; //to store buffer rememnants
	//taking inputs:
	for(int i=0; i<5; i++)
	  {
		printf("Enter name of student %d: ", i+1);
		scanf("%[^\n]s", record[i].name);
		getchar(); //flushing the buffer

		printf("Enter roll of student %d: ", i+1);
		scanf("%s", record[i].roll);
		getchar(); //flushing the buffer

		printf("Enter score of student %d: ", i+1);
		scanf("%d", &record[i].score);
		getchar(); //flushing the buffer
	  }

	FindTop(record);
  }

void FindTop(struct AcadRecord a[5])
  {
	int i=0, imax=0;
	char temp[100];
	int max=0;
	
	//finding max score
	while(i<5)
	  {
		if(max<=a[i].score) {max=a[i].score;}
		i++;
	  }

	//checking for same max score and also evaluating their names

	//we will use a "temp" string to store the name with 
	//lowest alphabetical position and highest marks
	i=0;
	strcpy(temp, a[0].name);
	while(i<5)
	  {
		if((strcmp(temp, a[i].name)>=0)&&(a[i].score==max))
		  {
			strcpy(temp, a[i].name); imax=i;
		  }
		i++;
	  }	

	
	
	printf("Name: %s\n", temp);
	printf("Roll number: %s\n", a[imax].roll);

  }
	
