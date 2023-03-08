#include <stdio.h>
#include <stdlib.h>
// Joseph Laudati
// CPSC 1010
// 2.15.2023
// Section 002
// Lab 4

// This program is in intended to take a user input of any 20 integers that they desire and put them in an array. A second array will be 'randomly generated' afterwards.
// Once the two are created, the computer then detects the second largest number in both and calculates the inner product from both arrays.



int main() {
		  int array1[20];
		  int array2[20];
		  int i;
          int j, temp;
		  int sh1,sh2;
		  int carray1[20], carray2[20];

//     Array1
		printf("Enter 20 integers:\n");
		printf("array1:\n");

		  for( i=0; i <20; i++)
		  {
		  scanf("%i",&array1[i]);
		  }

        for(i=0; i <20; i++)
		  {
		  printf("%i \n", array1[i]);
		  }
        printf("\n\n");
		
		// clone 1
	  for (i=0; i<20 ; i++){
              carray1[i] = array1[i];
      }

    
	//---------------------------------------


         for (i = 0; i < (20 - 1); ++i){
               for (j = 0; j < (20 - 1 - i); ++j){
							  if(carray1[j] > carray1[j+1]){
                        temp = carray1[j+1];
                        carray1[j+1] = carray1[j];
                        carray1[j] = temp;
                        }
                    }
               }



// Array2
	printf("... initializing array2 ...\n");
	printf("array2:\n");
      for(i=0; i<20; ++i)
		{
      array2[i] = (rand() % 50 + 1);
		}
		for(i=0; i<20; i++)
		{
		printf("%d \n",array2[i]);
		}


//clone 2
      for (i=0; i<20 ; i++){
				  carray2[i] = array2[i];
		}



//-----------------------------------------
    
             }
       }

		 

//Inner Product
   int d=0;
   for( i=0; i<20; i++){
	     d+=(array1[i] * array2[i]);
        }




		sh1 = carray1[19-1];
		
		sh2 = carray2[19-1];

		if (carray1[19] == carray1[19-1]){
		sh1 = carray1[19-2];
		printf("second highest from array1 is: % i\n", sh1);	
		}
		else{
				  printf("second highest from array1 is: % i\n", sh1);
		}


		printf("second highest from array2 is: % i\n", sh2);
		printf("inner product is: %i",d);



return 0;
}

