/*
*/

#include "defs.h"
// initializes the array of exercises
// inputs: the size of the array, the array, and file pointer
// output: none

void initArray(int arraySize, exercise workout[], FILE *inFile) {
}
// prints the array
// inputs: the size of the array and the array
// output: none
void printArray(int arraySize, exercise workout[]) {
int i;
printf("\n%-25s %-36s %5s %5s %5s %5s\n",
"EXERCISE", "MUSCLES", "WEIGHT",
"TIME", "SETS", "REPS");
for (i = 0; i < arraySize; i++) {
printf("%2d. %-21s %-35s %5d %5d %5d %5d\n",
i+1,
workout[i].name,
workout[i].muscles,
workout[i].weight,
workout[i].time,
workout[i].sets,
workout[i].reps);
}
printf("\n");
}
// fills in the array with the values from the user to create
// their workout plan
// note the call to freopen which sets the stdin back to the terminal
// inputs: the size of the array and the array
// output: none
void getWorkout(int arraySize, exercise workout[]) {
}