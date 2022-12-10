#include<stdio.h>

/*
  channel :- https://www.youtube.com/@TechBot_YT
  medium :- https://medium.com/@adilwadhwania
 Write a program to check the odd numbers in the range of 1-50
 1)intial value
 2)condition
 3)Incremental statement
*/
void main()
{
  int value=1;
  while (value<=50)
  {
    /* code */
    if(value%2!=0)
    {
        printf("%d is an odd number\n",value);
    }
    value++;//value=value+1;
  }
  
}