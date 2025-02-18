#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#include "library.h"
// operation on numbers 
  // basics operation on numbers 
int main() {


bool isEven(int n) {
	
	return(n%2==0) ;
}

int longFactorial(int n){
	int i ;
	int f ;
	
	f=1 ;
	for(i=1 ; i<=n ; i++ ) {
		f*=i ;
	}
	return(f) ;
}


int gcd(int n, int m) {


int a , b , result ,r  ;
if (n>m) {
	a=n ;
	b=m ;
}else{
	a=m ;
	b=n ;
}
while(a%b!=0) {
	r=a%b ;
	a=b ;
	b=r ;
}
result=b ;
return(result);
}

int sumOfDigits(int n) {
    int sum = 0;
    int r;
    while (n != 0) {
        r = n % 10;
        sum += r; 
        n /= 10; 
    }
    return sum;
}

bool isHarshednumber(int a) {
	int sum ,r , n;
	a = abs(a);
	n=a ;
	sum = 0 ;
	do {
		r=a%10;
		sum+=r;
		a=a/10 ;
		
	}while(a!=0) ;
	
	return(n%sum == 0);
	
}

int lCm(int a , int b) {
	int lcm , d ;
	a = abs(a);
	b = abs(b);
	if(a == 0 || b == 0) {
		return 0 ;
	}
	d =(a>b) ? a : b ;
	while(1) {
		if(d%a == 0 && d%b == 0) {
			lcm=d;
			break;
			
		}
		d++ ;
	}
	return(lcm) ;
}


bool isPalindrome(n) {
	int r , reversed , m ;
	m=n ;
	reversed=0 ;
	while(n!=0) {
		r=n%10 ;
		reversed = reversed*10 + r ;
		n=n/10 ;	
	}
	
	return(reversed==m) ;
}
	

bool isPrime(int n) {
    int i;
    double s, m;
    if (n < 2) return false;
    s = sqrt(n); 
    
    for (i = 2; i <= s; i++) {
        m = n % i;
        if (m == 0) return false; 
    }
    return true; 
}
int reverseNumber(int n) {
    int reversed = 0;
    
    while (n != 0) {
        int digit = n % 10;  
        reversed = reversed * 10 + digit; 
        n /= 10;                
    }
    
    return reversed;
} 
  //intermediate operations on strings
  bool isPerfect(int num) {
    int sum = 0;
    int i = 1; 

    while (i <= num / 2) {
        if (num % i == 0) { 
            sum += i; 
        }
        i++;
    }

    
    return sum == num;
}



void primeFactors(int num) {
    int i = 2; // i is like a count

    while (num > 1) {
        if (num % i == 0) { 
            printf("%d ", i);
            num /= i; 
        } else {
            i++; 
        }
    }
}


bool isAutomorphic(int num) {
    int square = num * num; 
    int digit ;
    int temp = num;
	int n ;  
	digit = 0 ;       
    while (temp != 0) {
        temp /= 10;
		digit++;   
    }
    n = pow(10 , digit) ;
    if(square%n == num) {
    	return true ;
	}else{
		return false ;
	}
    
}

int sumDivisors(int num) {
    int sum = 0 , i ;
    for (i = 1; i < num; i++) { 
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

bool isArmstrong(int num) {
	int digit ;
    int n = num;
    int sum = 0;
    int digits = 0;

    while (num != 0) {
        num /= 10;
        digits++;
    }

    num = n;
    while (num != 0) {
        digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return sum == n;
}


bool isMagic(int num) {
	int sum ;
	
	sum=sumOfDigits(num) ;
	
    while (sum>9) {
        sum = sumOfDigits(sum);
    }
if(sum==1) {
	return true ;
}else{
	return false ;
}
}

void fibonacciSeries(int n) {
    int n1 = 0, n2 = 1, i , n3 ;
    printf("\n%d\n%d\n" , n1 , n2) ;
    for(i=3 ; i<=n ; i++){
    	n3=n1+n2 ;
    	printf("%d\n" , n3) ;
    	n1=n2;
    	n2=n3;
	}
}

 //advanced operations on numbers 
 // Function to convert a decimal number to binary
void binaryConversion(int dec) {
    int bin = 0, result, i = 0;
    while (dec != 0) {
        result = dec % 2;
        dec = dec / 2;
        bin += result * pow(10, i);
        i++;
    }
    printf("The binary conversion of your number is: %d\n", bin);
}

// Function to check if a number is narcissistic
bool isNarcissistic(int num) {
    int sum = 0, a = num, mod, power = 0, temp = num;
    
    // Count number of digits (power)
    while (temp != 0) {
        power++;
        temp /= 10;
    }

    // Sum of powers of digits
    while (num != 0) {
        mod = num % 10;
        mod = pow(mod, power);
        sum += mod;
        num = num / 10;
    }

    return sum == a;
}

// Function to approximate the square root of a number
double sqrtApprox(int num) {
    double x0 = num, x, deff;
    do {
        x = (x0 + num / x0) / 2;
        deff = fabs(x - x0);
        x0 = x;
    } while (deff > 0.00001);
    
    return x;
}

// Function to calculate the power of a number
double power(int base, int exp) {
    int result = 1 ;
    int i ;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

// Function to check if a number is a happy number
bool isHappy(int num) {
    int mod, sum;
    while (num > 6) {
        sum = 0;
        while (num != 0) {
            mod = num % 10;
            mod = mod * mod;
            sum += mod;
            num /= 10;
        }
        num = sum;
    }
    
    return num == 1;
}

// Function to check if a number is an abundant number
bool isAbundant(int num) {
    int i = 1, sum = 0;
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
    return sum > num;
}


bool isDeficient(int num) {
    int i = 1, sum = 0;
    while (i <= num / 2) {
        if (num % i == 0) {
            sum += i;
        }
        i++;
    }
    return sum < num;
}


int sumOfPrimes(int n) {
	int sum , i , j ;
	sum=0;
	for(i=2 ; i<=n ; i++){
		for(j=2 ; j<=sqrt(i) ; j++) {
			if(n%i!=0) {
				sum=+i ;
			}
		}
	}
	return(sum);	
}
bool numberPrime(int a) {
	int i ;
	for(i=2 ; i <= sqrt(a) ; i++) {
		if(a%i==0) {
			return true ;
			
		}else{
			return false ;
		}
		
	}
}



int primeFactors(int num) {
    int i = 2;    // Start checking from the smallest prime number
    int sum = 0; 

    while (num > 1) {
        if (num % i == 0) {
            sum += sumOfDigits(i);
            num /= i; 
        } else {
            i++; 
        }
    }

    return sum;
}

bool isSmith(int n) {
	int d, p ;
	
	if (isPrime(n)) {
        // Smith numbers must be prime
        return false;
    }
    
	d=sumOfDigits(n) ;
	p=primefactors(n) ;
	if (d==p) {
		return true ;
	}else{
		return false ;
	}
}


void pascalTriangle(int n) {
int i , j , coef , space; // i is for rows and j for cols
 
 for(i=0 ; i<n ; i++) {
     for(space=1 ; space<n-space ; space++) {
     	printf("  ") ;// give it the form of a triangle
     	
	 for(j=0 ; j<=i ; j++) {
	 	if( j==0) {
	 		coef=1 ;
		 }else{
		 	coef=coef*((i-j)+1) /j ;
		 }
		 printf("%4d", coef);
	 }
	 printf("\n") ;
 }

}
}


int catalanNumber(int n) {
    int result = 1;
int i ;
    for ( i = 0; i < n; i++) {
        result = result * (2 * n - i) / (i + 1);
    }

    return result;
}


int combination(int n, int k) {
	int i ;
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;

    int result = 1;
    k = (k < n - k) ? k : (n - k);  

    for ( i = 0; i < k; i++) {
        result = result * (n - i) / (i + 1);
    }
    return result;
}


int bellNumber(int n) {
	int k , i ;
    if (n == 0) return 1;

    int bell[n + 1];  
    bell[0] = 1;     

    for ( i = 1; i <= n; i++) {
        bell[i] = 0;
        for ( k = 0; k < i; k++) {
            bell[i] += combination(i - 1, k) * bell[k];
        }
    }
    return bell[n];
} 

//operations on strings 
//basics strings
int stringLength(char* str){
	int length=0;
	int i=0;
	while (str[i]!='\0'){
		length++;
		i++;
	}
	return length;
}


void stringCopy(char* dest, const char* src){
	int i = 0;
while (src[i] != '\0') {
    dest[i] = src[i];//
    i++;
}
dest[i] = '\0'; // Null-terminate the destination string

	printf("the copy of your text is : %s\n", dest);
}


void stringConcat(char* dest, const char* src){
   int	i = 0; 
   int j=0 ;
	while (dest[j]!= '\0'){
		j++;
	}
	while (src[i] !='\0'){
		dest[j+i]=src[i];
		i++;
	}
	dest[i+j]='\0';
	printf("the new text is %s\n:" ,dest);
}   


int stringCompare(const char* str1, const char* str2){
		int a;
 while (*str1!='\0' || *str2 !='\0'){
 	if(*str1!= *str2){
 	 a = *str1-*str2;	
	 }
	 else {
	 a=0;
	 }
	 str1++;
	 str2++;
 }
 return a ;
}


bool isEmpty(char* str){
if (*str =='\0' ){
  	return true ;
  } 
  else {
  	return false; 
  }
}


void reverseString(char* str){
	int i = 0;
	int size;
	size = stringLength(str)-1;
	char rvs[size+1];
	while(i<=size){
		rvs[i]=str[size-i];
		i++;
	}
	rvs[i]='\0';
	printf("the reverse text is: %s\n", rvs);
} 


void toUpperCase(char* str){
	while (*str != '\0'){
	if (*str<123 && *str>97){
		*str = *str-32;
	}
	str++;
}
}


void tolowerCase(char* str){
	while (*str != '\0'){
	if (*str>65 && *str<90){
		*str = *str+32;
	}
	str++;
}
} 
//intermediate
bool isPalindrome(char* str){
	int i=0;
	int j=0;
	while (str[i] != '\0'){
		i++;
	} 
	i--;
	while (j < i){
	if (str[i] != str[j] ){ 
	return false ;
	}
	j++;
	i--;
}
return true;
} 

void countVowelsConsonants(char* str, int vowels, int consonants){
	int i = 0;
	while (str[i] != '\0'){
		if (str[i] == 'a' || str[i] == 'o' || str[i] == 'e' || str[i] == 'i' || str[i] == 'y' || str[i] == 'u' || str[i] == 'A' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U' || str[i] == 'E' || str[i] =='Y' ){
			vowels++;
		}
		else {
			consonants++;
		}
		i++;
	}
	printf("the number of vowels in your string is :%d\n" , vowels);
	printf("the number of  consonants in your string is :%d\n" , consonants );	
}

void removeWhitespaces(char* str){
	int i =0;
	int tmp;
	while (str[i] != '\0'){
	tmp = i;
		if (str[i] == ' '){ 
			while (str[i] !='\0' ){
			 str[i]=str[i+1];
			 i++;
		    }
		}
	i = tmp;
	i++;
	}
	str[i] = '\0';
	printf("the string without white spaces becomes :%s" , str);	
}


void removeDuplicates(char* str)
{
  int len,i,j,k;
  len=stringLength(str);
  for(i=0;i<len;i++)
  {
    for(j=i+1;j<len;)
    {
      if(str[i]==str[j])
      {
        for(k=j;k<len;k++)
        {
          str[k]=str[k+1];
          
        }
        len--;
      }
      else 
      {
        j++;
      }
      
    }
  }
}

int countWords(char* str){ 
int i = 0;
int j = 0;

	while (str[i]!= '\0'){
		if (str[i] == ' ' || str[i] == ',' || str[i] == '.'){
			j++;
		}
		i++;
	} 
	if (str[i-1] == ' ' || str[i-1] == ',' || str[i-1] == '.'){
		return j;
	}
 return j+1;	
}
 
 
 bool isAnagram(char* str1, char* str2){
	int l,k,i,j,f,c,n;
	bool v=true;
	l=stringLenght(str1);
	k=stringLenght(str2);
	if(l<k){
		n=k;
			}
	else{
		n=l;
		}
	int ch[n];
	initializeArray(ch,l,0);
	for(i=0;i<l;i++){
		c++;
		for(j=0;j<k;j++){
			if(ch[j]==0){
			if(str1[i]==str2[j]){
				//printf("ch %c and ch %c \n",str1[i],str2[j]);
			if(ch[j]==0){
				ch[j]=1;
				break;
						}
								}
						}
						}	
					}
	for(f=0;f<n;f++){
		if(ch[f]==0){
	v=false; 
					}
					}
	return v;
									}
// operations on arrays 
//1-basic
void initializeArray(int array1[] , int size) {
	int i ;
	int value ;

	for(i=0 ; i<size; i++) {
		printf("ENTER YOUR VALUES PLEASE :") ;
		scanf("%d", &value);
		array1[i] = value;
	}
	
}
void printArray( int array[] ,int size ) {
	int i ;
	printf("THE ELEMENTS OF THE ARRAY ARE :") ;
	for(i=0 ; i<size ; i++) {
		printf("%d" , array[i]) ;
	}
}
int findMax(int arr[] , int size) {
	int i  , max ;
	max=arr[0] ;
	for(i=1 ; i<size ; i++) {
		if(arr[i]>max) {
			max=arr[i];
		}
	}
	return max ;
}

int findMin(int arr[] , int size) {
	int i  , min ;
	min=arr[0] ;
	for(i=1 ; i<size ; i++) {
		if(arr[i]<min) {
			min=arr[i];
		}
	}
	return min ;
}
int sumArray(int arr[] , int size) {
	int sum , i ;
	sum = 0 ;
	for (i=0 ; i<size ; i++) {
		sum+=arr[i] ;
	}
return sum ;	
} double averrageArray(int arr[] , int size) {
	int aver , i , sum;
	sum = 0 ;
	for (i=0 ; i<size ; i++) {
		sum+=arr[i] ;
	}
	aver=sum/size ;
return aver;	
}

bool isStored(int array[] , int size ) {
	int i ;
	
	for(i=0 ; i<size-1 ; i++) {
		if (array[i] >array[i+1] ) {
			return false ;
		}
		
		}
		return true ;
	}

//intermediate

void reverseArray(int array[] , int size ) {


int i ;

printf("THE ELEMENT OF THE REVERSE ARRAY IS :") ;
for(i=size-1 ; i>=0 ; i--) {
printf("%d" , array[i]) ;
}
}

void countEvenOdd(int array[] , int* counteven , int* countodd , int size) {
	int i ;
	*counteven=0 ;
	*countodd=0 ;
	for(i=0 ; i<size ; i++) {
		if(array[i]%2 == 0) {
			(*counteven)++ ;
		}else{
			(*countodd)++ ;
		}
	}
	printf("THE NUMBER OF EVEN NUMBER IN THE ARRAY IS : \t%d" , *counteven) ;
	printf("\n ");
	printf("THE NUMBER OF ODD NUMBER IN THE ARRAY IS : \t%d" , *countodd) ;
}
int secondLargest(int arr[], int size) {
	int i , second , max;
	if (arr[0] > arr[1]) {
		max = arr[0] ;
		second = arr[1] ;
	}else {
		max = arr[1] ;
		second = arr[0] ;
	}
	  for ( i = 2; i < size; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];     
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    return second;
}

void elementFrequency(int array[] , int size ) {
int i , j  , counter ; 
for (i=0 ; i<=9 ; i++) {
	counter= 0 ;
	for(j=0 ; j<size ; j++) {
		if(array[j] == i ) {
			counter++ ;
		}
		}
		if(counter>0) {
			printf("THE FREQUENCY OF THE NUMBER %d IS : \t%d" , i , counter) ;
			printf("\n ") ;
		}
		
	}
}

void removeDuplicates(int array[] , int size ) {
	int k , j , i ;
	for(i=0 ; i<size ; i++) {
		for(j=i+1 ; j<size ; j++) {
			if(array[i]==array[j]) {
				for(k=j ; k<size ; k++) {
					array[k] = array[k+1] ;
					size--;
					j--;
				}
			}
		}
	}
	printf("the element of the array are :") ;
	for(i=0 ; i<size ; i++) {
		printf("%d" , array[i]) ;
		printf("\n") ;
		
	}
}


int binarySearch(int arr[] ,int size , int target ) {
	int end , start , mid ;
	end = size ;
	start = 0 ;
	while(start<=end) {
		mid=(end+start)/2 ;
		if(arr[mid] == target) {
			return mid ;
			break ;
		}
		if(arr[mid] < target ) {
			start=mid+1 ;
		}else if (arr[mid] > target) {
			end=mid-1 ;
		}
	}
	return -1 ;
}
int linearSearch(int arr[] , int size , int target) {
	int i ;
	i = 0 ;
	while (i<size) {
		if (arr[i] == target) {
			return i ;
		}
		i++ ;
	}
	return -1 ;
}



void leftShift(int arr[] , int size , int rotations) {
	int  i , j  , temp;
	
	
	for(j=0 ; j<rotations ; j++) {
			temp = arr[size-1] ;
		for(i=size-2 ; i>=0 ; i--) {
			arr[i+1] = arr[i] ;
		}
		arr[0] = temp ;
	}
	printf("the elements of the new array are :") ;
	for (i=0 ; i<size ; i++) {
		printf("%d" , arr[i]) ;
		printf("\n ") ;
	}
}


void rightShift(int arr[] , int size , int rotations) {
	int  i , j  , temp;
	
	
	for(j=0 ; j<rotations ; j++) {
			temp = arr[size-1] ;
		for(i=size-2 ; i>=0 ; i--) {
			arr[i+1] = arr[i] ;
		}
		arr[0] = temp ;
	}
	printf("the elements of the new array are :") ;
	for (i=0 ; i<size ; i++) {
		printf("%d" , arr[i]) ;
		printf("\n ") ;
	}
}
//storingarray


void bubbleSort(int arr[] , int size) {
	int i , j , temp , c ;
	bool sorted ;
	c = 0 ;
	sorted = true ;
	for (i=0 ; i<size-1 ; i++) {
		for(j=0 ; j<size-i-1 ; j++) {
			
			if(arr[j] > arr[j+1] ) {
				temp=arr[j] ;
				arr[j] = arr[j+1] ;
				arr[j+1] = temp ;
				sorted = false ;
				c++;
			}
		}
		if(sorted==true){
			printf("the array is already sorted !") ;
			break ;
			
		}
	}
	printf("the elments of the new storted array is : \n") ;
	for(i=0 ; i<size ; i++) {
		printf("%d" , arr[i]) ;
		printf(" \t") ;
	}
	printf("\n") ;
	printf("the number of swaps is : %d" , c) ;
}

void selectionSort(int arr[] , int size) {
	int j , i , min , temp ;
	for(i=0 ; i<size-1 ; i++) {
		min=i ;
		for(j=i+1 ; j<size ; j++){
			if(arr[j] < arr[min]) {
				min=j ;
			}
		}
		if(min != i ) {
			temp=arr[i] ;
			arr[i] = arr[min] ;
			arr[min] = temp ;
		}
	}
	
	printf("the new sorted array is : ") ;
	for(i=0 ; i<size ; i++) {
		printf("%d" , arr[i]) ;
		printf("\t") ;
	}
}

void insertionSort(int arr[] , int size) {
	int i , j , temp ;
	for(i=1 ;i<size ; i++) {
		temp=arr[i] ;
		j=i-1 ;
		while(j>=0 && arr[j] > temp) {
			arr[j+1] = arr[j] ;
			j--;
		}
		arr[j+1] = temp ;
	}
	printf("the new sorted array is :") ;
	printf("\n") ;
	for(i=0 ; i<size ; i++) {
		printf("%d" , arr[i]);
		printf("\t") ;
	}
}

void merge(int arr[], int start, int mid, int end) {
    int size1 = mid - start + 1;
    int size2 = end - mid;
    int arr1[size1], arr2[size2];
    int i, j, k;

    
    for (i = 0; i < size1; i++) {
        arr1[i] = arr[start + i];
    }
    for (j = 0; j < size2; j++) {
        arr2[j] = arr[mid + 1 + j];
    }

    i = 0; 
    j = 0; 
    k = start;


    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }

    
    while (i < size1) {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    
    while (j < size2) {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort1(int arr[], int lb, int ub) {
    int mid;
    if (lb < ub) {
        mid = (lb + ub) / 2;
        mergeSort1(arr, lb, mid);
        mergeSort1(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

void mergeSort2(int arr[], int lb, int ub) {
    int i;
    mergeSort1(arr, lb, ub);
    printf("the new array is: ");
    for (i = 0; i < ub + 1; i++) {
        printf("%d\t", arr[i]);
    }
}


int partition(int arr[] , int lb ,int  ub) {
	int start , end , temp , pivot;
	pivot=arr[lb] ;
	start=lb ;
	end=ub ;
	while(start<end) {
		while(arr[start] <= pivot) {
			start++;
		}
		while(arr[end] > pivot) {
			end--;
		}
		if(start<end) {
			temp=arr[end] ;
			arr[end]=arr[start] ;
			arr[start] = temp ;
		}
	}
	temp=arr[end] ;
	arr[end] = arr[lb] ;
	arr[lb] = temp ;
	return end ;
}
void quickSort(int arr[] , int lb , int ub) {
	int loc ;
	if(lb<ub) {
		loc=partition(arr , lb , ub) ;
		quickSort(arr , lb , loc-1) ;
		quickSort(arr , loc+1 , ub)	;	  
	}
	
}

void finalSort(int arr[] , int size ) {
	int lb , ub , i ;
	lb=0 ;
	ub=size-1 ;
    quickSort(arr , lb , ub) ;
    printf("the new sorted array is :") ;
    for(i=0 ; i<size ; i++) {
    	printf("%d" , arr[i]) ;
    	printf("\t") ;
	}
	
}
//advance
int findmissingnumber(int arr[] , int size) {

int n , sn , sa  , i , missingnumber ;
n=size+1 ;
sn = n*(n+1) / 2 ;
sa=0 ;
for(i=0 ; i<size ; i++) {
	sa+=arr[i] ;
}
missingnumber=sn-sa ;
return missingnumber ;
}


void findPairs(int arr[] , int size , int sum) {
	int j , i , c  ; 
	c=0 ;
	for(i=0 ; i<size ; i++) {
		for(j=i+1 ; j<size ; j++) {
			if(arr[i] + arr[j]==sum) {
				 printf("(%d, %d)\n", arr[i], arr[j]);
				 c++;
			}
		}
	}
	
	if(c<=0) {
		printf("there is no pairs that equal to the sum in that array !") ;
	}
}

void findsubarraywithsum(int arr[] , int size , int sum) {
	int i , currentsum , left , j;
	currentsum=0 ;
	i = 0 ;
	while(currentsum<sum && i<size) {
		currentsum+=arr[i] ;
		i++;
	}
	left=0 ;
	while(currentsum>sum && left<i) {
		currentsum-=arr[left] ;
		left++ ;
	}
	if(currentsum==sum) {
		printf("the subarray is :") ;
		for(j=left ; j<i ; j++) {
			printf("%d" , arr[j]) ;
			printf("\t") ;
		}
		} else{
			printf("there is no subarray that equal to the sum!") ;
	
}
}
void rearrangeAlternatePositiveNegative(int arr[], int size) {
    int i, size1 = 0, size2 = 0;


    for (i = 0; i < size; i++) {
        if (arr[i] >= 0) size1++;
        else size2++;
    }

    int pos[size1], neg[size2];
    size1 = 0;
    size2 = 0;

    for (i = 0; i < size; i++) {
        if (arr[i] >= 0) {
            pos[size1++] = arr[i];
        } else {
            neg[size2++] = arr[i];
        }
    }

    int j = 0, k = 0, i2 = 0;

    while (j < size1 && k < size2) {
        arr[i2++] = pos[j++];
        arr[i2++] = neg[k++];
    }

    while (j < size1) {
        arr[i2++] = pos[j++];
    }

    while (k < size2) {
        arr[i2++] = neg[k++];
    }
    printf("The rearranged array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int findmajorityelement(int arr[] , int size) {
	int i , j , n , count ;
	
	n=size/2;
	for(i=0 ; i<size ; i++) {
		count=0 ;
		for(j=0 ; j<size ; j++) {
			if(arr[i]==arr[j]) {
				count++;
			}
		}
		if(count>n) {
			return arr[i] ;
		}
	}
	return -1 ;
}

int longestIncreasingSubsequence(int arr[], int size) {
	int temp[size] , i  , j  , maxLength ;
	maxLength = 1 ;
	for(i=0 ; i<size ; i++) {
		temp[i] = 1 ;
	}
    for(i=1 ; i<size ; i++) {
    	for(j=0 ;  j<i ; j++) {
    		if(arr[i] > arr[j] && temp[i] < temp[j]+1) {
    			temp[i] = temp[j] + 1 ;
			}
		}
	if (temp[i] > maxLength) {
            maxLength = temp[i];
        }	
		
	}
	return maxLength ;
}

void findDuplicates(int arr[], int size) {
    int i, j, count, c;
    int visited[size];
    c = 0;
    for (i = 0; i < size; i++) {
        visited[i] = 0;
    }

    for (i = 0; i < size; i++) {
        if (visited[i] == 1) {
            continue;
        }
        count = 0;

        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }

        if (count > 0) {
        	count++;
            printf("%d is duplicated %d times!\n", arr[i], count);
            c++;
        }
    }

    if (c == 0) {
        printf("There are no duplicates!\n");
    }
}


void findUnion(int arr1[], int size1, int arr2[], int size2) {
	int i , j ;
    int unionArr[size1 + size2]; 
    int unionSize = 0; 
    for (i = 0; i < size1; i++) {
        unionArr[unionSize] = arr1[i];
        unionSize++;
    }


    for ( i = 0; i < size2; i++) {
        int found = 0;
        for ( j = 0; j < unionSize; j++) {
            if (arr2[i] == unionArr[j]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            unionArr[unionSize] = arr2[i];
            unionSize++;
        }
    }

    printf("The union of the two arrays is: ");
    for ( i = 0; i < unionSize; i++) {
        printf("%d\t", unionArr[i]);
    }
    printf("\n");
}

void findIntersection(int arr1[], int size1, int arr2[], int size2) {
    int i, j;
    int found;

    printf("The intersection of the two arrays is: ");
    for (i = 0; i < size1; i++) {
        found = 0; 
        
        for (j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1; 
                break; 
            }
        }

        if (found) {
            printf("%d\t", arr1[i]);
        }
    }

    printf("\n");
}
return 0 ;
} 
 // matrix
//Print Matrix 
void printMatrix(int rows, int cols, int matrix[rows][cols])
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("matrix[%d][%d]=%d\n",i,j,matrix[i][j]);
		}
	}
}

//------>Matrix Arithmetic 

//Matrix Addition 
void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols])
{
	int j,i;
	for(i=0;i<rows;i++)
	{
		for (j=0;j<cols;j++)
		{
			result[i][j]=mat1[i][j]+mat2[i][j];
			printf("the result is [%d][%d]=%d",i,j,result[i][j]);
		}
	}
}

//Scalar Multiplication 
void scalarMultiplyMatrix(int rows, int cols, int matrix[rows][cols], int scalar)
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			matrix[i][j]=matrix[i][j]*scalar;
			printf("the result is %d\n",matrix[i][j]);
		}
	}
}
//---->Matrix Properties and Checks 
//Check if Square Matrix 
bool isSquareMatrix(int rows, int cols)
{
	return rows==cols;
}

//Check if Diagonal Matrix 
bool isDiagonalMatrix(int size, int matrix[size][size])
{
	int i,j;
	for(i=0;i<size;i++)
	 {
	    for (j=0;j<size;j++)
	    {
	 	  if(i!=j && matrix[i][j]!=0)
	 		{
	 		 
			  return false;
			 	
	 			
			}
		 }
	 }
	 return true;
}

//Check if Upper Triangular Matrix 
bool isUpperTriangular(int size, int matrix[size][size])
{
	int i,j;
	for (i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i>j&&matrix[i][j]!=0)
			{
				return false;
			}
		}
	}
	return true;
}

//---->Matrix Operations
//Determinant of a Matrix 
int determinantMatrix(int size, int matrix[size][size])
{
	
}

//Matrix Power 
void matrixPower(int size, int matrix[size][size], int power, int result[size][size])
{
	
}

//--------->Advanced Matrix Functions

//Adjoint Matrix 
void adjointMatrix(int size, int matrix[size][size], int adjoint[size][size])
{
	
}
//Matrix Rank 
int matrixRank(int rows, int cols, int matrix[rows][cols])
{
	
}

//---->Special Matrix Operations
//Rotate Matrix 90 Degrees 
void rotateMatrix90(int size, int matrix[size][size])
{
	
}
