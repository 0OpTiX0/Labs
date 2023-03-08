

//Joseph Laudati
// 02.28.2023
// CPSC 1010 Lab
// Section 002


// This program will take user input in the form of a file and count
// how many lines there are in total.
// The programmer cannot use scanf statements to enter information. 
// Check the lab document for information about how to do this.

#include <stdio.h>
#include <string.h>



int main(void){
FILE *file;
int i;
int lines = 0;
char txt[200][200];

//when opening a file with "fopen" set the mode to either "r,w, or a"
// "r" is for reading.
// "w" is for writing at the beginning of the file,
// "a" is for writing at the end of the file.
// Enter "man fopen" in your terminal for more information! 

file = fopen("poe-raven.txt","r");
// stdin or "standard input" is an input stream where data is sent to and read by a program!
// use this as an alternative to scanf as it is used in fscanf!
// ex: fscanf(str, 100, stdin);

while(fgets(txt[lines],200, file) != NULL){
		  lines++;
}
//fgets or 'File get string"  is an fucntion that reads a limited number of characters from  a
//given file stream source otno an array of characters
// Use this to put information into an array just like scanf!
// A stream is the source of information that you are using fgets to retreive from.


printf("This poem has %i lines.",lines);

  for (i = 0; i < lines; i++) {
        printf(" %s\n", txt[i]);
    }

fclose(file);

return 0;
}
