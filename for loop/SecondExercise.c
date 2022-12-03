#include<stdio.h>
/* 
    channel :- https://medium.com/@adilwadhwania
    medium :- https://medium.com/@adilwadhwania
    Write a program to print numbers from 30-1 
    with difference of 3.
    output :- 30,27,24,21....
    
*/
void main()
{
    /* Explaination
       1) Initial value of 'i' will be 30, beacause we want to 
       print from 30-1 so starting is 30
       2)Condtion will be same as first example 'i>=1', all
       the numbers greater than 1 should be prited and starting 
       point is 30
       3)Decremenet statement because we want to print in reverse direction
       and in the difference of 3 so the decrement statement is 'i-=3(i=i-3)'
       it will substract 3 from the value 'i' in each iteration
    */
    for (int i = 30; i >=1; i-=3)
    {
        printf("%d\n",i);
    }
    
}