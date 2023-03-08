

// Joseph Laudati
// 03.08.2023
// CPSC 1010 Lab
// Section 002
// Lab 7


// This program will will take a file as in input and then ask the user what they would like to do with it. The options are as follows: 'print the poem',
// "show number of lines in the poem", "convert the case", and "quit." The program will then commit these user selected actions to the file it has recieved.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE  200
#define MAX_LINE_LEN 100

int main(void){
FILE *file;
int i;
int lines = 0;
int menuChoice;
int x = 0;
char txt[MAX_LINE][MAX_LINE_LEN];
char ntxt[MAX_LINE][MAX_LINE_LEN];

file = fopen("input.txt","r");


while(fgets(txt[lines], MAX_LINE_LEN, file) != NULL){
    lines++;
}


while(x == 0){
printf("\n Choose from the menu:\n" );
printf("\n 1. print the poem");
printf("\n 2. show number of lines in the poem");
printf("\n 3. convert the case");
printf("\n 4. quit \n\n");
printf("- - >");
scanf("%i", &menuChoice);


if (menuChoice == 1 ){
	for (i = 0; i < lines; i++) {
		printf(" %s", txt[i]); 
	}
}
if (menuChoice == 2 ){
printf("\nThe poem has %i lines.\n\n",lines);
}
if (menuChoice == 3 ){
      for (i = 0; i < lines; i++) {
        int j;
        for (j = 0; txt[i][j] != '\0'; j++) {
            if (islower(txt[i][j])) {
                ntxt[i][j] = toupper(txt[i][j]);
            } else if (isupper(txt[i][j])) {
                ntxt[i][j] = tolower(txt[i][j]);
            } else {
                ntxt[i][j] = txt[i][j];
            }
        }
        ntxt[i][j] = '\0'; 
    }

    for (i = 0; i < lines; i++) {
        printf("%s", ntxt[i]); 
    }
}
if (menuChoice == 4 ){
    break;
}
}
return 0;
}