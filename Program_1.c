//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Print the array elements in using printf statement
   int arr[5],N,i;
    
   printf("Enter 5 integers");
    for(i=0;i<5;i++)
     scanf("%d",&arr[i]);
     
     printf("The elements are\n");
     for(i=0;i<5;i++)
     printf("%d\n",arr[i]);

   
  
      
   return 0; 
}
