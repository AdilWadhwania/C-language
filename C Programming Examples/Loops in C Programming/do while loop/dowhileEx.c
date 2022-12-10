#include<stdio.h>

/*
 channel :- https://www.youtube.com/@TechBot_YT
 medium :- https://medium.com/@adilwadhwania
 Write a program to check the even numbers in the range of 1-50
 you should check first number of range compulsary
 1)intial value
 2)condition
 3)Incremental statmenet
*/
void main()
{
    int intial=1;
    //if else ladder or switch statement
    //if(1%2==0)...elseif(20%==0) 50 cases
    do
    {
        if(intial%2==0)
        {
            printf("\n%d",intial);
        }
        intial++;
    } while (intial<=20);
    


}