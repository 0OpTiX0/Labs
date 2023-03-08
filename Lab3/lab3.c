#include <stdio.h>



// Joseph Laudati
// 2.7.2023
// CPSC 1010 Lab
// Section 002
// Lab 3

// This program will take a user input in which the user will input a character that falls into the ASCII table.
// The program then corresponds their answer to a number in which the computer multiplies it by two.
// The computer will then take the calculated answer and tell the user if their number falls under the
// five categories of hurricanes. The computer will then ask if the user wants to enter another value.

int main (){
		  char ui = 0;
		  int sc = 0;
		  int mi = 2;

		  while ( mi == 2){
					 printf("Enter a character:");
			       fscanf(stdin," %c",&ui);
					 int dio  = ui*1;
					 printf("\nThe decimal representation of your character %c is %i.",ui, dio);
					 printf("\nWould (2 * '%c') be a hurricane??", ui);

					 sc = ui*2;
					
					 printf("\n(2 * '%c') = %i", ui, sc);
					 
					 if (sc >= 74 && sc <= 95){
								printf("\nWind speed of %i is a Category 1 hurricane.\n",sc);
								}
					 else if (sc >= 96 && sc <= 110){
								printf("\nWind speed of %i is a Category 2 hurricane.\n",sc);
								}
					 else if (sc >= 111 && sc <= 130){
							   printf("\nWind speed of %i is a Category 3 hurricane.\n",sc);
					         }

					 else if (sc >= 131 && sc <= 155){
								printf("\nWind speed of %i is a Category 4 hurricane.\n",sc);
				            }
					 else if (sc > 155){
								printf("\nWind speed of %i is a Category 5 hurricane.\n",sc);
								}
					 else if (sc < 74){
								printf("\nWind speed of %i is not strong enough to be a hurricane.\n", sc);
					 }


					printf("- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -");
		         printf("\n\nEnter 1 to go again or 0 to quit:\n");
					scanf(" %i",&mi);

					if (mi == 1){
							  mi = 2;
					}
					else if (mi == 0){
							  break;
					}

               } 

		  return 0;
}
