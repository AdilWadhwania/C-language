#include<stdio.h>

/*
    channel :- https://www.youtube.com/@TechBot_YT
    medium :- https://medium.com/@adilwadhwania

    Write a program to print odd numbers in between 1 to 50
    using do-while loop.
*/

void main()
{
    /* 
      -> we want to start to check numbers is odd or not
         from 1 so the starting value 'a' is one
    */
    int a=1;
    do
    {
        /* 
         -> The if condition check when number 'a' is divided
            by 2 the remainder is not equal to zero then it 
            is odd number
        */
        if(a%2!=0)
        {
            printf("%d\n",a);
        }
        /* 
        -> we have started with 1 and want to check all the 
           numbers is odd or not till 50 so everytime 
           we increment the valueof a by one
        */
        a++;//a=a+1
    } while (a<=50);
    /*
      -> While condition
      -> we started with 1 and only want to check the 
        numbers till 50 only so the condition is to check
        the value of a is less than or equal to 50 then 
        only execute the loop, else break out of the loop
    */

}