#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "library.h"
#include <stdbool.h>



int main ()
{
	int* vowels;int*consonants;
	int choice ,string,strings,freq,result1,position;
	char str[200],dest[200],src[200],str1[200],str2[200],sub[200],result[200],ch;
	bool verify;
	int sstrings;
	int  choice2,numbers,num,a,b,base,exp,levelChoice,functionChoice,i;
	 int  rows,scalar,s,size,cols2, cols, value,rows2;
    int matrix[100][100], mat1[100][100], mat2[100][100];
	int resullt[100][100];
     int arr[100],r,size1,size2,size3,sum, subChoice, target, rotations;
    int evenCount = 0, oddCount = 0, reesult;
    double avg;
    int arr1[100],arr2[100];
   
   	
   
   	
   	 printf("what  categorie you want to try\n");
   	 printf("choose '1' if you want to test : Basic operations on numbers  \n");
   	 printf("choose '2' if you want to test : Intermediate operations on numbers \n");
   	 printf("choose '3' if you want to test : Advanced operations on numbers \n");
   	 printf("enter your choice\n");
   	 scanf("%d",&choice2);
   	 switch(choice2)
   	 {
   	 	case 1:
   	 	printf("what function you want to try \n");
   	 	printf("1.  Sum of Digits\n");
   	 	printf("2.  Reverse Number\n");
   	 	printf("3.  Palindrome\n");
   	 	printf("4.  Prime\n");
   	 	printf("5.  Greatest Common Divisor\n");
   	 	printf("6.  Least Common Multiple\n");
		printf("7.  Factorial\n");
		printf("8.  Even/Odd \n");
		printf("the function is : ");
		scanf("%d",&numbers);
		
		switch (numbers)
		{
			case 1 :
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				
				printf("the sum of digits of the number is : %d \n",sumOfDigits( num));
				break;
			case 2:
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the reverse of the number is : %d \n",reverseNumber( num));
				break;
			case 3:
			do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			if (isPalindrome( num))
			{
				printf("the number is palindrome\n");
				}	
			else
			{
				printf("the number is not palindrome\n");
			}
			break;
			case 4:
			do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			if (isPrime( num))
			{
				printf("the number is prime\n");
				}	
			else
			{
				printf("the number is not prime\n");
			}	
			break;
			case 5 :
			printf("give the number a and b");
			scanf ("%d",&a);
			scanf("%d",&b);
			printf("the GCD of the numbers %d and %d is : %d\n",a,b,gcd( a,  b));
			break;
			case 6 :
			printf("give the number a and b");
			scanf ("%d",&a);
			scanf("%d",&b);
			printf("the LCM of the numbers %d and %d is : %d\n",a,b,lcm(a, b));
			break;
			case 7 :
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the factorial  of the number is : %d \n",factorial(num));
				break;
			case 8 :
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			if (isEven( num))
			{
				printf("the number is even\n");
				}	
			else
			{
				printf("the number is odd\n");
			}
			break;
			default:
            printf("Invalid choice! Please enter a number between 1 and 8.\n");
            break;	
		}
		break;
		case 2 :
			printf("what function you want to try \n");
   	 	printf("1.  Prime Factorization\n");
   	 	printf("2.   Armstrong Number\n");
   	 	printf("3.  Fibonacci Sequence\n");
   	 	printf("4.  Sum of Divisors\n");
   	 	printf("5.  Perfect Number\n");
   	 	printf("6.  Magic Number\n");
		printf("7.  Automorphic Number\n");
		scanf("%d",&numbers);
	
		switch (numbers)
		{
			case 1 :
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				primeFactors( num);
				break;
			case 2 :
		    	do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isArmstrong(num))
			    {
				printf("the number is armstrong number\n");
				}	
		    	else
			   {
		    		printf("the number is not an armstrong number\n");
		     	}
		    	break;
			case 3 :
			    do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    fibonacciSeries(num);
				break;
			case 4 :
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the sum of divisors  of the number is : %d \n",sumDivisors( num));
				break;
			case 5 :
				do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isPerfect( num))
			    {
				printf("the number is perfect\n");
				}	
			    else
			    {
				printf("the number is not perfect\n");
		    	}
		    	break;
		    case 6 :
		    	do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isMagic(num))
			    {
				printf("the number is magic\n");
				}	
			    else
			    {
				printf("the number is not magic\n");
		    	}
		    	break;
		    case 7 :
		    	do{
					printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isAutomorphic( num))
			    {
				printf("the number is automorphic\n");
				}	
			    else
			    {
				printf("the number is not automorfhic\n");
		    	}
		    	break;
		    default:
            printf("Invalid choice! Please enter a number between 1 and 7.\n");
            break;
		    
				
		}
		case 3 :
			
		printf("what function you want to try \n");
   	 	printf("1.  Binary Conversion\n");
   	 	printf("2.  Narcissistic Number\n");
   	 	printf("3.  Square Root Calculation\n");
   	 	printf("4.  Exponentiation\n");
   	 	printf("5.  Happy Number\n");
   	 	printf("6.  Abundant Number \n");
		printf("7.  Deficient Number\n");
		printf("8.  Sum of Fibonacci Even Numbers\n");
		printf("9.  Harshad Number\n");
		printf("10. Catalan Number Calculation \n");
		printf("11. Pascal Triangle\n");
		printf("12. Bell Number\n");
		printf("13. Kaprekar Number\n");
		printf("14. Smith Number\n");
		printf("15. Sum of Prime Numbers \n");
		scanf("%d",&numbers);
		switch (numbers)
		{
			case 1:
				printf(" give the number : ");
				scanf("%d",&num);
				toBinary( num);
				break;
			case 2:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isNarcissistic( num))
			    {
				printf("the number is narcissistic\n");
				}	
			    else
			    {
				printf("the number is not narcissistic\n");
		    	}
		    	break;
			case 3:
				printf("give the number : ");
				scanf("%d",&num);
				printf(" the square root of %d is : %lf \n",num ,sqrtApprox(num));
				break;
			case 4:
				printf("enter base");
				scanf("%d",&base);
				printf("enter the exp");
				scanf("%d ",&exp);
				printf("the power is : %lf \n",power( base,  exp));
				break;
			case 5:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isHappy(num))
			    {
				printf("the number is happy\n");
				}	
			    else
			    {
				printf("the number is not happy\n");
		    	}
		    	break;
			case 6:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isAbundant( num))
			    {
				printf("the number is abundant\n");
				}	
			    else
			    {
				printf("the number is not abundant\n");
		    	}
		    	break;
			case 7:
				printf("give the number\n");
			    scanf("%d",&num);
			    if (isDeficient( num))
			    {
				printf("the number is defricient\n");
				}	
			    else
			    {
				printf("the number is not defricient\n");
		    	}
		    	break;
		    case 8:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the sum of even fibonacci is :  ",sumEvenFibonacci( num));
				break;
			case 9:
			    do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isHarshad( num))
			    {
				printf("the number is harshad\n");
				}	
			    else
			    {
				printf("the number is not harshad\n");
		    	}
		    	break;
		    case 10:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the catalan Number is : %lu \n",catalanNumber( num));
				break;
			case 11:
				printf("give the number of rows");
				scanf("%d",&num);
				pascalTriangle( num);
			case 12:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
				printf("the bell number is : %lu \n",bellNumber(num));
				break;
			case 13:
			    do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isKaprekar( num))
			    {
				printf("the number is kaprekar number\n");
				}	
			    else
			    {
				printf("the number is not kaprekar number \n");
		    	}
		    	break;
			case 14:
				do{
				printf("give the number\n");
				scanf("%d",&num);
				}while(num<=0);
			    if (isSmith( num))
			    {
				printf("the number is smith number\n");
				}	
			    else
			    {
				printf("the number is not smith number\n");
		    	}
		    	break;
		    default:
                  printf("Invalid choice! Please enter a number between 1 and 15.\n");
                break;
				
				
		}
	
		}
	}

