/*
	Name: R. William Ebenezaraj
	Roll number: 19CY20030
*/

#include <stdio.h>

int main()
  {
	char s1[100], s2[100];
	printf("Enter s1: ");
	scanf("%[^\n]s", s1);
	getchar();
	printf("Enter s2: ");
	scanf("%[^\n]s", s2);

	char sout[200];  //output string

	int i, j, o;
	o=j=i=0;
	
	while((s1[i]!='\0')||(s2[j]!='\0'))
	  {
		while(s1[i]!=' '&&s1[i]!='\0')
		  {
			sout[o]=s1[i];
			i++; o++;
		  }
		if(s1[i]!='\0') i++;    //to ensure that increment is done to index of s1 only if s1 hasn't reached the end
		if(sout[o-1]!=' ') {sout[o]=' '; o++;}
		
	
		while(s2[j]!=' '&&s2[j]!='\0')
		  {
			sout[o]=s2[j];
			j++; o++;
		  }
		if(s2[j]!='\0') j++;   //to ensure that increment is done to index of s2 only if s2 hasn't reached the end
		if(sout[o-1]!=' ') {sout[o]=' '; o++;}
	  }
	
	if (sout[o-1]==' ') o--;
	sout[o]='\0';   //appending the output string by null

	printf("%s", sout);
  }
