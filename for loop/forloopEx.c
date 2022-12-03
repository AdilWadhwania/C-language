#include<stdio.h>

/*
    channel :- https://medium.com/@adilwadhwania
    medium :- https://medium.com/@adilwadhwania
   For loop program  
  1)Print the numbers from 1-50 using for loop in C
  2)print numbers from 1-50 but with the gap 6. 
  output :- 1,7,13,19....
*/

void main()
{
    /*
       1) initial value
       2) condition 
       3) increment/decrement statement 
    */
    for(int i=1;i<=50;i+=6 ) //i+=6       //i++ ~ i=i+1
    {
        //code 
        printf("%d\n",i);
    }
}