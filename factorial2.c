#include<stdio.h>
int factorial(int n)
{
    int i , fact=1 ;
 for (i = 1; i <= n; i++)
 {
    fact = fact*i ;
 }
 return fact ; 
} 
int main()
{
int n ;
printf("Enter a number:" );
scanf("%d" , &n );
if (n<0)
  printf("Factorial is defined for natural numbers" );
else
  printf("Factorial of %d = %d\n" , n , factorial(n)); 
return 0;
}