

//Joseph Laudati
// 02.28.2023
// CPSC 1010 Lab
// Section 002
//Lab 6


// This program will take user input in the form of a file and count
// how many lines there are in total.
// The programmer cannot use scanf statements to enter information. 
// Check the lab document for information about how to do this.

#include <stdio.h>
#include <string.h>

#define MAX_LINE  200
#define MAX_LINE_LEN 100


int main(void){
int i;
int lines = 0;

char txt[MAX_LINE][MAX_LINE_LEN];


while(fgets(txt[lines],MAX_LINE_LEN, stdin) != NULL){
		  lines++;
		  }

printf("\nThis poem has %i lines.\n\n",lines);

for (i = 0; i < lines; i++) {
		  printf(" %s", txt[i]); 
		  }

return 0;
}
