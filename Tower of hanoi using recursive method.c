/* C program to show the solution of Tower of Hanoi problem using recursive method
Name: Raju Shrestha (522)
Date: 20 july 2016
Reference: Data structure book from page no. 142 to 146.
*/

#include <stdio.h>
 
void towers(int, char, char, char); 
 
int main()
{
    int num; //declaring  int type variable num
 
    printf("Enter the number of disks to find the solution : ");
    scanf("%d", &num);
    printf("The sequence of moves in the tower of hanoi are :\n");
    towers(num, 'A', 'C', 'B');
    return 0;
}
void towers(int num, char frompeg, char topeg, char auxpeg)
{     
    
/*if only one disk make the move and return*/
    
    if(num == 1)
    {
        printf("\n %s %c %s %c", " Move disk  1 from peg", frompeg, "to peg", topeg);
        return;
    }
    
/* move top num-1 disks from A to B, using C as auxilary */
    
    towers(num - 1, frompeg, auxpeg, topeg);
    
/* move the remaining disk from A to c*/
    
    printf("\n %s %d %s %c %s %c", "Move disk",num, "from peg", frompeg,"to peg", topeg);
/*move num-1 disk from B to C using C as auxilary */ 
    towers(num - 1, auxpeg, topeg, frompeg);
}
/*end the tower*/
