#include<stdio.h>

/*
 channel :- https://www.youtube.com/@TechBot_YT
 medium :- https://medium.com/@adilwadhwania
 
 Write a program to print all odd and even numbers 
 between 1 to 50 using whike loop
 Output should be like :- 1 is odd number
                          2 is even number and so on
*/
void main()
{
  /*
    We want to print numbers from 1 to 50 so starting value 
    should be 1 ('x')
  */  
  int x=1;
  /* 
    Now the starting point is 1 and we want to got till 50
    so the condition is 'x' should be less than or equal to 
    50 and if it is true then only the loop is executed
  */
    while(x<=50)
    {
        /*
         Here if condition is checking that if 'x' is divided
         by 2 then its remainder is equal to 0, if it is true
         then the number is even else the number is odd
        */
        if(x%2==0)
        {
            printf("%d is even number\n",x);
        }
        else 
        {
            printf("%d is odd number\n",x);
        }
        /*
            The incremental statement everytime will change 
            the value of 'x' by one to check all the values
            from 1 to 50 is odd or even number
        */
        x++;//x=x+1 
    }
  
}