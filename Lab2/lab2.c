#include <stdio.h>
#include <math.h>
// Joseph Laudati
// 01.31.2023
// Lab 002
// Lab #2



// This program is divided into two parts, the firt part takes in values
// and compares a trauncated answer to a float answer (1 vs 1.75)





int main (void) {

   // variables for showing precedence and integer truncation
	
   int x = 4, y = 3, z = -10 , result;
	
	


   // variables needed for volume of a sphere
  // const float PI = 3.141592;  // defines a constant: will not allow
                               // its value to be changed
   
   int  radius = 0;
	


   // Show precedence and integer truncation
   result = y + z / x ;
	
	
   printf("\n result of y + z / x is %i, NOT %.2f  \n", result, -1.75);

   // Get user input
   printf("Enter radius: ");         
   scanf("%d", &radius);


	




   // volume of a sphere = 4/3 * PI * r * r * r
  float volume = M_PI * pow(radius,3) * x/y ;

   // Print sphere radius and volume

	printf("\nSphere volume = (");
	printf("%d ", x);  			 		
	printf(" / ");
	printf("%d ", y);  			 		
	printf(" * ");
	printf("%f",M_PI);  			 		
	printf(" * ");
	printf("%d ", radius);			 	 		
	printf(" * ");
	printf("%d ", radius);			 	 		
	printf(" * ");
	printf("%d ", radius);			 	 		
	printf(") = ");				 		
	printf("%.2f\n", volume);		


   return 0;
}


