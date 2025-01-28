#ifndef LIBRARY_H
#define LIBRARY_H
 //Operations on numbers
 //Basic operations on numbers

int sumOfDigits(int num);
int reverseNumber(int num);
bool isPalindrome(int num);
bool isPrime(int num);
int gcd(int a, int b);
int lcm(int a, int b);
long factorial(int num);
bool isEven(int num); 
  //intermediate opertions on numbers
void primeFactors(int num);
bool isArmstrong(int num);
void fibonacciSeries(int n);
int sumDivisors(int num);
bool isPerfect(int num);
bool isMagic(int num);
bool isAutomorphic(int num);
  //advanced operations on numbers 
void toBinary(int num);
bool isNarcissistic(int num);
double sqrtApprox(int num);
double power(int base, int exp);
bool isHappy(int num);
bool isDeficient(int num); 
int sumEvenFibonacci(int n);
bool isHarshad(int num);
unsigned long catalanNumber(int n);
void pascalTriangle(int n);
unsigned long bellNumber(int n);
bool isKaprekar(int num);
bool isSmith(int num);
int sumOfPrimes(int n);

//operatios on strings
  //basics operationson  strings

int stringLength(char* str);
void stringCopy(char* dest, const char* src); 
void stringConcat(char* dest, const char* src);
int stringCompare(const char* str1, const char* str2);
bool isEmpty(char* str);
void reverseString(char* str);
void toUpperCase(char* str);
void toLowerCase(char* str);
 //intermediate operations on strings 
bool isPalindrome(char* str);
void countVowelsConsonants(char* str, int* vowels, int* consonants); 
int findSubstring(const char* str, const char* sub); 
void removeWhitespaces(char* str);
bool isAnagram(char* str1, char* str2);
void charFrequency(char* str, int* freq);
int countWords(char* str);
void removeDuplicates(char* str);

 //operations on matrice 
  
// Basic Operations on Matrices
void initializeMatrix(int rows, int cols, int **matrix, int value);
void printMatrix(int rows, int cols, int **matrix);
void inputMatrix(int rows, int cols, int **matrix);

// Matrix Arithmetic
void addMatrices(int rows, int cols, int **mat1, int **mat2, int **result);
void subtractMatrices(int rows, int cols, int **mat1, int **mat2, int **result);
void multiplyMatrices(int rows1, int cols1, int **mat1, int rows2, int cols2, int **mat2, int **result);
void scalarMultiplyMatrix(int rows, int cols, int **matrix, int scalar);

// Matrix Properties and Checks
bool isSquareMatrix(int rows, int cols);
bool isIdentityMatrix(int size, int **matrix);
bool isDiagonalMatrix(int size, int **matrix);
bool isSymmetricMatrix(int size, int **matrix);
  
//Operations on arrays
 //Basic Array Functions
void initializeArray(int arr[], int size, int value);
void printArray(int arr[], int size);
int findMax(int arr[], int size);
int findMin(int arr[], int size);
int sumArray(int arr[], int size);
double averageArray(int arr[], int size);
bool isSorted(int arr[], int size);
  //Intermediate Array Functions
void reverseArray(int arr[], int size);
void countEvenOdd(int arr[], int size, int* evenCount, int* oddCount); 
int secondLargest(int arr[], int size);
void elementFrequency(int arr[], int size);
void removeDuplicates(int arr[], int size);
int binarySearch(int arr[], int size, int target); 
int linearSearch(int arr[], int size, int target);
void leftShift(int arr[], int size, int rotations);
void rightShift(int arr[], int size, int rotations);
  //Sorting Algorithms
void bubbleSort(int arr[], int size);
void selectionSort(int arr[], int size);
void insertionSort(int arr[], int size);
void mergeSort(int arr[], int left, int right);
void quickSort(int arr[], int low, int high); 
  //advanced algorithms
int findMissingNumber(int arr[], int size);
void findPairsWithSum(int arr[], int size, int sum);
void findSubArrayWithSum(int arr[], int size, int sum); 
void rearrangeAlternatePositiveNegative(int arr[], int size); 
int findMajorityElement(int arr[], int size);
int longestIncreasingSubsequence(int arr[], int size); 
void findDuplicates(int arr[], int size);
void findIntersection(int arr1[], int size1, int arr2[], int size2);
void findUnion(int arr1[], int size1, int arr2[], int size2);

  
  

#endif
