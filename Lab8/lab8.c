

// Joseph Laudati
// 03.08.2023
// CPSC 1010 Lab
// Section 002
// Lab 8




#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE  200
#define MAX_LINE_LEN 100





int printMenu();
void printArray(char txt[MAX_LINE][MAX_LINE_LEN],int lines);
void convertCase(char txt[MAX_LINE][MAX_LINE_LEN], int lines, char ntxt[MAX_LINE][MAX_LINE_LEN]);



int main(void){
FILE *file;
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

menuChoice = printMenu();


if (menuChoice == 1 ){
	printArray(txt,lines);
}
if (menuChoice == 2 ){
printf("\nThe poem has %i lines.\n\n",lines);
}
if (menuChoice == 3 ){
    convertCase(txt,lines,ntxt);
    //convertCase(txt,lines,ntxt);
    // For joseph's future questions about this function. If you want to change an input using a function, set the original first
    // then input what is being changed and set the final thing you want the changes to be put in to.

}
if (menuChoice == 4 ){
    break;
}
}

return 0;
}



int printMenu(){   
    int menuChoice;
    printf("\n Choose from the menu:\n" );
    printf("\n 1. print the poem");
    printf("\n 2. show number of lines in the poem");
    printf("\n 3. convert the case");
    printf("\n 4. quit \n\n");
    printf("- - >");
    scanf("%i", &menuChoice);

    return menuChoice;
}

void printArray(char txt[MAX_LINE][MAX_LINE_LEN], int lines){
    int i;
    
    
    for (i = 0; i < lines; i++) {
		printf("%s", txt[i]); 
	}
}

void convertCase(char txt[MAX_LINE][MAX_LINE_LEN], int lines, char ntxt[MAX_LINE][MAX_LINE_LEN]){
int i;
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
   
//sss