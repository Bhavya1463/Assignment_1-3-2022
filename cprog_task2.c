/*Question:Write a function that receives marks received by a student in 3 subjects
and returns the total and percentage of these marks. Call this function from
main( ) and print the results in main( ).
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


void calculate(int,int,int,float *,float *);


int main()
{
    float mark1,mark2,mark3;
    float average,percentage;

    printf("\nEnter the marks for subject 1: ");
    scanf("%f",&mark1);

    printf("\nEnter the marks for subject 2: ");
    scanf("%f",&mark2);

    printf("\nEnter the marks for subject 3: ");
    scanf("%f",&mark3);

    calculate(mark1,mark2,mark3,&average,&percentage);

    printf("\n Average: %f",average);
    printf("\nPercentage: %f",percentage);

}

void calculate(int mark1,int mark2,int mark3,float *average,float *percentage)
{
    *average = (mark1 + mark2 + mark3)/3.0;
    *percentage = ((mark1 + mark2 + mark3)/300.0)*100;
}