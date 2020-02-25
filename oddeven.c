/*Program to check number is whether EVEN or ODD 
without using any arithmetic or relational operators
*/



#include <stdio.h>
 
int main()
{
    int number;
     
    //input an integer number
    printf("Please input an integer number: ");
    scanf("%d",&number);
         
    //check 0th bit of number is 1 or 0
    //0x indicates the presence of a hexadecimal number
    (number & 0x01) ? printf("%d is an ODD Number.", number) :  printf("%d is an EVEN Number.",number) ;
     //the above is read as an if statement 
     // (condition) ? (iftrue) : (iffalse) 
     /*if condition is true then the first printf is done and if it is false 
     then the second print f is done 
     */
    printf("\n");
    // & is the bitwise operator which only gives 1 when both digits being compared are 1 
    return 0;   
}

