/* Lab 2 - Program description:
   The first part of this  program demonstrates operator precedence, 
	integer truncation, and will allow you to change the output of a
	floating point value from 6 decimal places down to 2.

	The second part of this program asks the user to enter one number: 
	an integer for radius of a sphere.  It then calculates the volume of 
	the sphere and shows the results to the user.

	The scanf() function is used for user input and also comes from stdio.h
	like printf().

	The const keyword is used with the variable declaration for PI. This
	is explained below.  The user will also change the program so that it
	uses the pre-defined value for PI (M_PI) from the math.h library as well
	as using the pow() function for calculating radius cubed.
*/


/* Lab 2 - Instructions:
   
	1. Copy this file into another file called lab2.c.
	
	2. Open another ssh/putty shell or terminal window so that you have two
	   windows open.  In one window, open up lab2.c in an editor. In 
		the other window compile lab2.c. 
		
		In the window with lab2.c open, start fixing the errors according 
		to the compile errors shown in the other window, leaving a comment 
		before each line that contained errors.  In your comment, explain 
		what the error was.  

	3. You should always start at the top of the list of errors shown
	   after compiling.  After each fix, save the file, and in the other 
		window, re-compile again. You should see that list of errors
		get smaller each time you make some fixes and re-compile.
		Don't forget to use the -Wall option when compiling to see all 
		the warnings that may be present:   gcc -Wall lab2.c

		11 errors and 7 warnings show up when you compile this file.

	4. Once you have all the errors fixed and comments preceding each
	   line that contained an error, in the window where you did your
		compiling, open up errors.c.  Use this file to view these 
		instructions in the big comment at the top. In lab2.c, you will 
		get rid of this big comment at the top, so using errors.c, the 
		original file, you will still have access to them.
		
		You want to have only your normal, proper header as required at
		the top of your program.

	5. Besides understading compiler errors and fixing the errors, there
	   are three parts to this program.
		a. The first part shows operator precedence, integer truncation,
		   and how to limit the number of decimal places of a floating point
			value printed to the screen.
		b. The second part shows how to get a value entered by the user and
		   use that value to compute the volume of a sphere.  It also shows
			const variables as well as use of the math.h libraray.
		c. The third part is the existence of a semantic error - is the volume
			that is calculated with a radius of 5 equal to 523.60?  If not, why?

	6. After fixing the errors, the first line of output should be:
				result of y + z / x is 1, NOT -1.750000

		Change the output of -1.750000 so that it prints to 2 decimal places:
				result of y + z / x is 1, NOT -1.75

	7. For the second part, do some testing with various numbers.
		Use 2 for radius as one of your tests.  You should get the following 
		printed to the screen:
				Sphere volume = (4 / 3 * 3.141593 * 2 * 2 * 2) = 33.51 
		
	8. Do another test using 3 for radius. You should get the following 
		printed to the screen:
				Sphere volume = (4 / 3 * 3.141593 * 3 * 3 * 3) = 113.10

	9. After fixing the errors and ensuring your program works, do the
		following steps:
		a. Add    #include <math.h>   to the top of your file where your
			other #include statement is.
		b. Comment out the declaration of PI.
		c. Change all other instances of the variable PI to M_PI. This allows 
			the use of the predefined constant called M_PI from the math 
			library on our system.  
		d. Change the part of the volume calculation where you have 
			radius * radius * radius so that it uses the pow() function.  You
			may need to go to cplusplus.com for more information on how to use
			this function.

  10. Recompile and retest your code, ensuring it still works.  NOTE:  When
  		using the math library, to compile you need to add -lm to the compile 
		command:
				gcc -Wall lab2.c -lm

  11. After you have done all these steps, then you can submit your
	   fixed lab2.c to handin.  Your TA can help you if you have 
		trouble doing that.  
*/



#include <stdio.h>

int main (void) {

	// variables for showing precedence and integer truncation
	int x = 4 y = 3, z = -10, result;

	// variables needed for volume of a sphere
	const float PI = 3.141592;  // defines a constant: will not allow
										 // its value to be changed
	float volume = 0:    			
	int radius = 0;


	// Show precedence and integer truncation
	result = y + z / x;
	printf("\nresult of y + z / x is %d, NOT %f  \n', result, -1.75;

	// Get user input
	printf"Enter radius: ")  			
	scanf("%d, &radius);     			

	// volume of a sphere = 4/3 * PI * r * r * r
	volume = x / y * PI * r * r * r ;

	// Print sphere radius and volume
	printf("\nSphere volume = (");
	print("%d " x);  			 		
	printf(" / ");
	print("%d ", y);  			 		
	printf(" * ");
	print("%f" PI);  			 		
	printf(" * ");
	printf(radius);			 	 		
	printf(" * ");
	printf(radius);			 	 		
	printf(" * ");
	printf(radius);			 	 		
	printf(") = ").				 		
	printf("%.2f\n', volume);		

	return 0;
}



