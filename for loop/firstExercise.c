#include<stdio.h>
/*
    channel :- https://medium.com/@adilwadhwania
    medium :- https://medium.com/@adilwadhwania
    Write a program to print numbers from 20-1 using for loop
*/
void main()
{
    /*  Explaination :-
        1)initial value is starting point that is 20
        2)The number starts 20 and in decresing order it should print 
        till the number 1 so we have the condition that 'i' should be greater than 
        or equal to one, all the numbers from 20 - 1 is the condition.
        -> if we write the condition i<=20 then after the value 1 the decrement 
        statement will be executed and value will be 0, 0 is less than 20 and that
        that will be printed but we don't want to print zero.
        3)decrement statement because we want to print the number from 20 to 1
        in backward direction so the value of variable 'i' should be decresed by 1
        not increased by one
    */
    for (int i = 20; i >=1; i--)//i-- ~ i=i-1;
    {
        printf("%d\n",i); // print the 'i' variable
    }
    
}