/* CS 153 PROGRAM ASSIGNMENT #2
BMI
Erik Marrero
9/10/2020
*/
#include<stdio.h>

int main(){

   /*Initializing Variables*/
   float weight;
   float height;
   double BMI;

   /*Prompt user to input weight in pounds and height in inches*/
   printf( "Enter your weight in pounds:");
   scanf("%f", &weight);
   printf( "Enter a your height in inches:");
   scanf("%f", &height);

   /* Print out the weight and hight that was inputted, just to confirm the input*/
   printf( "\nWeight entered: %0.2f ", weight);
   printf("pounds");
   printf( "\nHeight entered: %0.2f ", height);
   printf("inches");

   /* Formula to calculate BMI*/
   BMI = (weight * 703.0)/(height*height);


   /* Print out BMI*/
   printf("\nBMI is :%f" , BMI);

   /*BMI less than 18.5 prints underweight */
   if (BMI < 18.5){
       printf("\nYou are underweight.");
	   }
   /*BMI less than 25.0 prints normal */
   else if (BMI < 25.0){
       printf("\nYour weight is normal.");
	   }
   /*BMI less than 30.0 prints slightly over-weight */
    else if (BMI < 30.0){
       printf("\nYou are slightly overweight.");
	   }
    /*BMI less than 40.0 prints over-weight */
    else if (BMI < 40.0){
       printf("\nYou are overweight.");
	   }
    /*BMI greater than 40 prints obese */
    else {
       printf("\nYou are obese.");
	   }

    return 0;
}

