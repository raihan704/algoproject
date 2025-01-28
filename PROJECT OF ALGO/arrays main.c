#include <stdio.h>
#include <stdbool.h>
#include "library.h"

// Function 
void initializeArray(int arr[], int size, int value);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
bool isSorted(int arr[], int size);
void reverseArray(int arr[], int size);
int secondLargest(int arr[], int size);
void elementFrequency(int arr[], int size);
void removeDuplicates(int arr[], int *size);
int binarySearch(int arr[], int size, int target);
int linearSearch(int arr[], int size, int target);
void leftShift(int arr[], int size, int rotations);
void rightShift(int arr[], int size, int rotations);
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void mergeSort(int arr[], int left, int right);
void quickSort(int arr[], int low, int high);
int findMissingNumber(int arr[], int size);
void findPairsWithSum(int arr[], int size, int sum);
int findMissingNumber(int arr[], int size);
void findPairsWithSum(int arr[], int size, int sum);
void findSubArrayWithSum(int arr[], int size, int sum);  
void rearrangeAlternatePositiveNegative(int arr[], int size);  
int findMajorityElement(int arr[], int size);
int longestIncreasingSubsequence(int arr[], int size);    
void findDuplicates(int arr[], int size);
void findIntersection(int arr1[], int size1, int arr2[], int size2);
void findUnion(int arr1[], int size1, int arr2[], int size2);




int main() {
    int arr[100],i,r,n,s,size,size1,size2,size3,sum, choice, subChoice, value, target, rotations;
    int evenCount = 0, oddCount = 0, result;
    double avg;
    int arr1[100],arr2[100];
   printf("         *************************** TEST THE ARRAYS FUNCTIONS ***************************\n");
	printf("                 Choose which kind of arrays functions you want to test\n");
	printf("                 Choose '1' if you want to test : Basic Array Functions \n");
	printf("                 Choose '2' if you want to test : Intermediate Array Functions \n");
	printf("                 Choose '3' if you want to test : Sorting Algorithms \n");
	printf("                 Choose '4' if you want to test : Advanced Array Functions \n");
	printf("                                      Enter your choice \n");
    scanf("%d", &choice);


    switch (choice) {
        case 1: // Basic Array Functions
            printf("What finctions do you want to try :\n");
            printf("1. Initialize Array\n");
            printf("2. Print Array\n");
            printf("3. Find Maximum\n");
            printf("4. Find Minimum\n");
            printf("5. Calculate Sum\n");
            printf("6. Calculate Average\n");
            printf("7. Check if Sorted\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);
          
          
          
          
          
          
          
          
            switch (subChoice) {
                case 1:
                	
                	do{
	                  printf("Enter the size you want your array to be :");
                      scanf("%d", &size );
                     if(size<0){
                  	printf("invalid size !!!\n");
                 	 }
                  	} while(size < 0);
                    printf("Enter the value to initialize: ");
                    scanf("%d", &value);
                    initializeArray(arr, size, value);
                     printf("Array elements are : \n");
                   	for(i=0 ; i<size ; i++){
	     	         printf("%d\t" , arr[i]);  }
                 	printf("\n");
                	break;
                case 2:
                		
           	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
              printArray(arr, size);
                    break;
                case 3:
                	
           	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
                    result = findMax(arr, size);
                    printf("The maximum element in the array is : %d\n", result);
                    break;
                case 4:
                	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
                    result = findMin(arr, size);
                    printf("Minimum element: %d\n", result);
                    break;
                case 5:
                	
                	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
                    result = sumArray(arr, size);
                    printf("Sum of elements: %d\n", result);
                    break;
                case 6:
                	
                	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
                    avg = averageArray(arr, size);
                    printf("Average of elements: %.2f\n", avg);
                    break;
                case 7:
                	
                	do{
	         printf("Enter the size you want your array to be :");
              scanf("%d", &size );
             if(size<0){
         	printf("invalid size !!!\n");
         	 }
          	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
                    if (isSorted(arr, size)) {
                        printf("The array is sorted.\n");
                    } else {
                        printf("The array is not sorted.\n");
                    }
                    break;
                default:
                    printf("Invalid choice!!!\n");
                    
                    
                    
                    
                    
                    
            }
            break;










        case 2: // Intermediate Array Functions
            printf("What finctions do you want to try :\n");
            printf("1. Reverse Array\n");
            printf("2. Count Even and Odd Numbers\n");
            printf("3. Find Second Largest\n");
            printf("4. Find Frequency of Elements\n");
            printf("5. Remove Duplicates\n");
            printf("6. Binary Search\n");
            printf("7. Linear Search\n");
            printf("8. Left Shift Array\n");
            printf("9. Right Shift Array\n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);
           
               	do{
	            printf("Enter the size you want your array to be :");
              scanf("%d", &size );
               if(size<0){
     	     printf("invalid size !!!\n");
          	 }
         	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
         	
         	
         	
         	
         	
         	  
         	  
         	  
         	
         	
            switch (subChoice) {
                case 1:
                    reverseArray(arr, size);
                    printf("The reverse array :\n");
	      	    	printArray(arr, size);
                case 2:
                	
                	countEvenOdd(arr, size, &evenCount, &oddCount);
                    printf("The number of even numbers in the array is : %d\n", evenCount);
                    printf("The number of odd numbers in the array is : %d\n", oddCount);
                    break;
                case 3:
                    result = secondLargest(arr, size);
                    printf("The second largest elements in the array is :%d\n", result);
                    break;
                case 4:
                    elementFrequency(arr, size);
                    break;
                case 5:
                	isSorted(arr, size);
                    removeDuplicates(arr, &size);
                   	printf("Here is the new array :\n");
			 		for(i=0 ; i<size ; i++){
	             	printf("%d\t" , arr[i]);  }
                 	printf("\n");
                case 6:
                    printf("Enter target value: ");
                    scanf("%d", &target);
                    result = binarySearch(arr, size, target);
                    if (result != -1) {
                        printf("Element found at index %d\n", result);
                    } else {
                        printf("Element not found.\n");
                    }
                    break;
                case 7:
                    printf("Enter target value: ");
                    scanf("%d", &target);
                    result = linearSearch(arr, size, target);
                    if (result != -1) {
                        printf("The target element is found at index %d\n", result);
                    } else {
                        printf("The target element is not found !\n");
                    }
                    break;
                case 8:
                    printf("Enter the number of rotations: ");
                    scanf("%d", &rotations);
                    leftShift(arr, size, rotations);
                   	printf("The array after %d rotations :\n", rotations);
               	  printArray(arr, size);
			     	break;
                case 9:
                    printf("Enter the number of rotations: ");
                    scanf("%d", &rotations);
                    rightShift(arr, size, rotations);
                     printf("The array after the %d rotations :\n", rotations);
                     printArray(arr, size);
					break; 
                default:
                    printf("Invalid choice!!!\n");
                    
                    
                    
                    
                    
                    
                    
                    
                    
            }
            break;










        case 3: // Sorting Algorithms
            printf("Choose a sorting algorithm:\n");
            printf("1. Bubble Sort\n");
            printf("2. Selection Sort\n");
            printf("3. Insertion Sort\n");
            printf("4. Merge Sort\n");
            printf("5. Quick Sort \n");
            printf("Enter your choice: ");
            scanf("%d", &subChoice);
          
          
             	do{
          	 printf("Enter the size you want your array to be :");
             scanf("%d", &size );
              if(size<0){
            	printf("invalid size !!!\n");
	          }
            	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	 printArray(arr, size);
         	 
         	 
         	 
         	 
         	 
         	 
         	 
            switch (subChoice) {
                case 1:
                    bubbleSort(arr, size);
                  	printf("the new array is :\n");
                      printArray(arr,size);	 
                    break;
                case 2:
                    selectionSort(arr, size);
                      printf("the new array is :\n");
                    printArray(arr,size);
                 	break;
                case 3:
                    insertionSort(arr, size);
                   printf("the new array is :\n");
                    printArray(arr, size);
                 	break;
                case 4:
                	
                printf("its hard !");
                 	break;
                case 5:
                	
                printf("its hard !");
                default:
                    printf("Invalid choice!!!\n");
                    
                    
                    
                    
                    
                    
                    
                    
                    
                    
            }
            break;  









        case 4: // Advanced Array Functions
            printf("What finctions do you want to try \n");
		printf("1_Find Missing Number\n");
		printf("2_Find Pairs with Given Sum\n");
		printf("3_Subarray with Given Sum\n");
		printf("4_Rearrange Positive and Negative Numbers\n");
		printf("5_Find Majority Element\n");
		printf("6_Longest Increasing Subsequence\n");
		printf("7_Find Duplicates\n");
		printf("8_Find Intersection of Two Arrays\n");
		printf("9_Find Union of Two Arrays\n");
		printf("The choosing functions is :\n");
		scanf("%d",&subChoice);
		      switch (subChoice){
		      	case 1:
		      	
             	do{
	           printf("Enter the size you want your array to be :");
               scanf("%d", &size );
                if(size<0){
             	printf("invalid size !!!\n");
	            }
	             } while(size < 0);
                 for(i=0 ; i<size ; i++){
                 	printf("Enter the element %d :", i+1);
                 	scanf("%d", &arr[i]);	}
                 	printf("Array elements are : \n");
                 	 printArray(arr,size);
         			s=findMissingNumber(arr, size);
         			printf("The missing number in the array is :%d\n", s);
         			break;
         		case 2:
         		
             	do{
              	 printf("Enter the size you want your array to be :");
                  scanf("%d", &size );
                  if(size<0){
               	printf("invalid size !!!\n");
	              }
              	} while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	for(i=0 ; i<size ; i++){
	     	printf("%d\t" , arr[i]); }
         	printf("\n");
         			findPairsWithSum(arr, size, sum);
         			break;
         		case 3:
         	         	do{
	            printf("Enter the size you want your array to be :");
              scanf("%d", &size );
               if(size<=0){
     	     printf("invalid size !!!\n");
          	 }
         	} while(size <= 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	for(i=0 ; i<size ; i++){
	     	printf("%d\t" , arr[i]); }
         	printf("\n");
         	printf("enter the sum :\n");
         	scanf("%d", &sum);
            findSubArrayWithSum(arr, size, sum);
    
         			break;
         		case 4:
         		
             	do{
	             printf("Enter the size you want your array to be :");
                  scanf("%d", &size );
                  if(size<0){
              	printf("invalid size !!!\n");
	              }
	              } while(size < 0);
             for(i=0 ; i<size ; i++){
         	printf("Enter the element %d :", i+1);
         	scanf("%d", &arr[i]);	}
         	printf("Array elements are : \n");
         	printArray(arr, size);
         	rearrangeAlternatePositiveNegative(arr, size);
				
				    break;
				case 5:
				
             	do{
	             printf("Enter the size you want your array to be :");
                 scanf("%d", &size );
                 if(size<0){
                	printf("invalid size !!!\n");
             	 }
               	} while(size < 0);
                 for(i=0 ; i<size ; i++){
             	printf("Enter the element %d :", i+1);
             	scanf("%d", &arr[i]);	}
             	printf("Array elements are : \n");
         		printArray(arr, size);
			 	s=findMajorityElement(arr, size);
			 	printf("The majority element in this array is :%d\n ", s);
				    break;
				case 6:
				
             	do{
	           printf("Enter the size you want your array to be :");
                 scanf("%d", &size );
                 if(size<0){
              	printf("invalid size !!!\n");
	               }
	              } while(size < 0);
                 for(i=0 ; i<size ; i++){
             	printf("Enter the element %d :", i+1);
             	scanf("%d", &arr[i]);	}
             	printf("Array elements are : \n");
             	printArray(arr, size);
			 	s=longestIncreasingSubsequence(arr, size);
			 	printf("The length of the longest increasing subsequence in the array is :%d\n", s);
				     break;
				case 7:
				
             	do{
	              printf("Enter the size you want your array to be :");
                  scanf("%d", &size );
                 if(size<0){
     	         printf("invalid size !!!\n");
	            }
	             } while(size < 0);
                 for(i=0 ; i<size ; i++){
              	printf("Enter the element %d :", i+1);
             	scanf("%d", &arr[i]);	}
             	printf("Array elements are : \n");
             	printArray(arr, size);
			 
			 
		     	 // check min main algo
			 
			 
			 
			 
			 
			 
			 
			 
			 
                	printf("The new array :\n");
			 	printArray(arr, size);
					 break;
				case 8:
					  
                 	do{
                  	 printf("Enter the size you want your first array to be :");
                      scanf("%d", &size1 );
                      if(size1<0){
                     	printf("invalid size !!!\n");
	                      }
                	} while(size1 < 0);
                 for(i=0 ; i<size1 ; i++){
            	printf("Enter the element %d of the first array :", i+1);
            	scanf("%d", &arr1[i]); } 
			 	printf("The first Array elements are : \n");
             		printArray(arr1, size1);
             	
                	do{
	                  printf("Enter the size you want your second array to be :");
                     scanf("%d", &size2 );
                     if(size2<0){
                  	printf("invalid size !!!\n");
	                  }
                  	} while(size2 < 0);
                 for(i=0 ; i<size2 ; i++){
             	printf("Enter the element %d of the second array :", i+1);
             	scanf("%d", &arr2[i]); } 
			 	printf("The second Array elements are : \n");
             	printArray(arr2, size2);
                 findIntersection(arr1, size1, arr2, size2);
				
					 break;
				case 9:
					
					 	do{
                  	 printf("Enter the size you want your first array to be :");
                      scanf("%d", &size1 );
                      if(size1<0){
                     	printf("invalid size !!!\n");
	                      }
                	} while(size1 < 0);
                 for(i=0 ; i<size1 ; i++){
             	printf("Enter the element %d of the first array :", i+1);
             	scanf("%d", &arr1[i]); } 
			 	printf("Array elements are : \n");
			 		printArray(arr1, size1);
        
                    	do{
	                  printf("Enter the size you want your second array to be :\n");
                     scanf("%d", &size2 );
                     if(size2<0){
                  	printf("invalid size !!!\n");
	                  }
                  	} while(size2 < 0);
                 for(i=0 ; i<size2 ; i++){
             	printf("Enter the element %d of the second array :", i+1);
             	scanf("%d", &arr2[i]); } 
			 	printf("Array elements are : \n");
             	printArray(arr2, size2);
                 findUnion(arr1, size1, arr2, size2);
					 break;			
         		default:
         			printf("Invalid choice!!!");
         			
         			
         			
         			
         			
         			
         			
         			
         			
         			
         			
         	 break;		
	 
		    }
		    
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
				default:
         			printf("Invalid choice!!!");
			 }
            
           
           
           
           return 0;
            
 
  }

  




