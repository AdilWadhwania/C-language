#include<stdio.h>

/*
    channel :- https://www.youtube.com/@TechBot_YT
    medium :- https://medium.com/@adilwadhwania

    Write a program to print numbers from 1 to 500 
    using do while loop in C
*/

void main()
{
    /*
      Here we will start printing numbers from 1
      so the intial value will be 1('s')
    */
    int s=1;
    do
    {    
        /*This printf statement will print the number
          value of 's' variable
        */    
        printf("%d\n",s);
        /*
         This is increment statement it will increment the 
         value of 's' by 1 everytime this loop is executed
         to check the variable 's' with while condition and 
         continmue the loop
        */
        s++;//s=s+1
    } while (s<=500);
    /*
      the while condition checks weather a number in 
      variable 's' is less than or equal to 500, if it is 
      true then the loop will be executed or else it will
      exist the loop.
    */
    
}