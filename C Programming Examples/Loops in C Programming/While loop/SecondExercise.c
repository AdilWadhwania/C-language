#include<stdio.h>
/* 
    channel :- https://www.youtube.com/@TechBot_YT
    medium :- https://medium.com/@adilwadhwania
    Write a program to print multiples of 6 in the 
    between numbers 1-70
    output numbers should be :- 6,12,18,24,....
    
*/
void main()
{
    // the initial value is 1 because we want to start from 1 
    int x=1;
    /*
      -> The condition checks weather a number is less than or equal to
        70 or not if true the code inside loop will be executed or else it 
        will break out of the loop.
      ->We are checking this condition because we want to print the numbers 
        between 1 to 70 so the initial value is already 1(x) and we restrict 
        the numbers to be less than or equal 70 using condition
    */
    while(x<=70)
    {
        /* if condition checks the remainder when the x is divided by 6
          and if that is equal to 0 then we will print the number because 
          we want multiples of 6    
        */
        if(x%6==0)
        {
            printf("%d\n",x);
        }
        /* we will increment every time by one in order to check with the numbers
           between 1 to 70
        */
        x++;//x=x+1 
    }
}