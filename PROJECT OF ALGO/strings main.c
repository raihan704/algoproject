 #include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
  //Basic String Functions 
  //size

 int stringLength(char* str){
  int length=0;
  int i=0;
  while (str[i]!='\0'){
    length++;
    i++;
  }
  return length;
}

void stringCopy(char* dest, const char* src)
{ int i=0;// I initialized it in order to prevent any inconvenient results.
	if(dest==NULL)
{printf("there is no element called dest in the memory");}
	else
	while(src[i]!='\0')// we copy as long as there are characters to copy.
	{dest[i]=src[i];
	i++;
	}
	dest[i]='\0';
	}
void stringConcat(char* dest, const char* src)
{ 
	while(*dest!='\0')
{dest++;}

	while(*src!='\0')// we copy as long as there are characters to copy.
	{*dest= *src;
	
	dest++;
	src++;
	}
	*dest='\0';//I used this to terminate the dest character concatenation.
}

  //Compare Strings 
  int stringCompare(const char* str1, const char* str2)
  {
  	while(*str1!='\0' && *str2!='\0')
  	{
  		if(*str1!=*str2)
  		{
  			return *str1-*str2;
		  }
		  str1++;
		  str2++;
	  }
	  return *str1-*str2;
  }
  
//Check if Empty 
 bool isEmpty(char* str)	
{
	return (str == NULL ||*str=='\0' );
}
//Reverse a String 
void reverseString(char* str)
{
	int left,right;
	left=0;right=stringLength(str)-1;
	char temp;
	while(left<right)
	{
		temp=str[left];
		str[left]=str[right];
		str[right]=temp;
		left++;
		right--;
	}
	
}
//Convert to Lowercase 
void toLowerCase(char* str)
{
	while (*str!='\0')
	{
		if(*str>65 && *str<90)
		{
			*str=*str+32;
			
		}
		str++;
	}
}
void toUpperCase(char* str)
{int i=0;
while (str[i]!=0)
{
	if(str[i]>='a'&&str[i]<='z')
	{str[i]='A'+(str[i]-'a');}

	i++;
	}

}

//Intermediate String Functions

//Palindrome 
bool isPalindrom(char* str)
 {
 	int i;
 	char temp[100];
 	char* str2=str;
 	while(*str!='\0')
 	{
 		temp[i]=*str;
 		str++;
 		i++;
	 }
	 i=i-1;
 	while(*str2!='\0' && i>=0)
 	{
 		if(temp[i]!=*str2)
 		{
 			return false;
		 }
		 i--;
		 str2++;
	 }
	 return true;
 }

void countVowelsConsonants(char* str, int* vowels, int* consonants)
{int countcon=0,i=0,countvow=0;
char character;
int length=stringLength(str);
toUpperCase(str);
for(i=0;i<length;i++)
switch (str[i])
{
	case 'I':
	case 'A':
	case 'O':
	case 'U':
	case 'Y':
	case 'E':
		countvow++;
		break;
		default:
	 if (str[i] >= 'A' && str[i] <= 'Z') {// I used it to make sure that we calculate consonants which are characters not special characters.
       countcon++;
                }
       break;}
	
	*vowels=countvow;
	*consonants=countcon;
	
	
	
}

//Find Substring 
   int findSubstring(const char* str, const char* sub)
  {
  	int i,j,len,lensub,size;
  	len=stringLength(str);
  	lensub=stringLength( sub);
  	size=len-lensub;
  	for(i=0;i<size;i++)
  	{ 
		  	for(j=0;j<lensub;j++)
		  	{
			   if(str[i+j]!=sub[j])
			   {
			   	break;
				} 
				
		    	}
		    	if(j==lensub)
		    	{
				return i;
			}	
	 }
	 return -1;
}
void removeWhitespaces(char* str){

int j=0,i,length;
length=stringLength(str);
for(i=0;i<length;i++)
{ if(str[i]!=' ')
{ str[j]=str[i];
j++;
}
	
}
str[j]='\0';
}


bool isAnagram(char* str1, char* str2){
int i=0;
	int string1[26]={0};
	int string2[26]={0};
	int length1=stringLength(str1);
    int length2=stringLength(str2);
    if (length1!=length2)//if they don't have the same length we don't need to check anymore.
{return false;
}
toUpperCase(str1);
toUpperCase(str2);//I converted both of them to upper cases to facilitate the comparison.
	for(i=0;i<length1;i++)
	{ 
	
	string1[str1[i]-'A']++;
	string2[str2[i]-'A']++;
	}
	for(i=0;i<26;i++)// here we will calculate the number of appearance of each character in each array.
	{if (string1[i]==string2[i])
	return true;
	else if(string1[i]!=string2[i])
	return false;
}
}


	
    


void charFrequency(char* str, int* freq){
	int i=0;
	int length=stringLength(str);
	toUpperCase(str);//I converted both of them to upper cases to facilitate the comparison.
	for(i=0;i<length;i++)
	{ 
	if(str[i]>='A'&&str[i]<='Z'){
	freq[str[i]-'A']++;}
	}	
for(i=0;i<26;i++)// here we will display the number of appearances of each character in the string along with the character in upper case.
	{if (freq[i]>0)
	printf("the character %c is repeated %d times.\n",'A'+i,freq[i]);
}
	
}

//Count Words 
int countWords(char* str)
{
	int i,count,size;
	size=stringLength( str);
	count=0;
	for (i=0;i<size;i++)
	{
		if(*str==' '||*str==','||*str=='.' &&str[i+1]!='\0')
		{
			count=count+1;
		}
		str++;
	}
	return count+1;
}
//Remove Duplicate Characters 
void removeDuplicates(char* str)
{
	printf("not ivilabol right now");
}


//--------Advanced String Functions


//String Compression 
void compressString(char* str, char* result)
{
	
}
char *mystrchr(const char *str,int c)//whenever this function find a character it will point out to it.
{
while (*str !='\0')	
	{
		if(*str==c)return (char *)str;
		str++;
	}
	return NULL;
}

void longestWord(char* str, char* result){
int i=0;
	int count=0;
	int max=-1;
	char nonw[]=":. ,;\n\t";
	char temp[100];
	int length=stringLength(str);
   while (i<length)
{
	count=0;//everytime we initialize count to the 0.
	while(i<length &&mystrchr(nonw,str[i])==NULL)//we keep checking for new words where they contain characters not nonwords
	{
		temp[count]=str[i];//we start storing the new word in a temporary variable.
		count++;
		i++;	}
		temp[count]='\0';//we finish the word by a terminator.
	if(count>max){//if the count is greater than the max then it means this word is the largest uptill now.
	max=count;//we will store count in max which indicates that this is the number of characters in the largest word uptill now.
	stringCopy(result, temp);}//we copy the new word temp in result until we find larger value.
	while(i<length&&strchr(nonw,str[i])!=NULL)//if any of these conditions happened we move to a new character to check it again
{
i++;//we increment i by 1
	}
}


}
	
 
int countChar(char* str, char ch){
	int i=0;
	int count=0;
	
	int length=stringLength(str);
if(ch>='a'&&ch<='z')
{ch='A'+(ch-'a');
}
	
	for(i=0;i<length;i++)
	{ if(str[i]>='a'&&str[i]<='z')
{str[i]='A'+(str[i]-'a');
}
	if(str[i]==ch){//here I covered both cases where str[i] might be in upper case or lower case.
	count=count+1;}
	
}
	return count;
}
int checkPal(char* str) {
	int i=0;int length=stringLength(str);
	int temp=length-1;
    while (i < temp) {
        if (str[i] != str[temp])
            return false;
        i++;
        temp--;
    }
    return true;
}
	



//String Rotation Check 
bool isRotation(char* str1, char* str2)
{
	
}
//Find and Replace 
void findAndReplace(char* str, char* find, char* replace)
{
	
}
//String Permutations 
void printPermutations(char* str)
{
	
}
void splitString(char* str, char delimiter, char tokens[][100], int* tokenCount)
{
int len = stringLength(str);
  
  *tokenCount = 0;
  
  int i = 0;
  while (i < len)
  {
    while (i < len)
    {
     
      if (str[i]!=delimiter)
        break;
      i++;
    }
    
    int old_i = i;
    while (i < len)
    {
      
      if (str[i]==delimiter)
        break;
      i++;
    }

    int tokenlength=i-old_i;
    if (tokenlength >0){
  stringCopy(tokens[*tokenCount],str+old_i);
  tokens[*tokenCount][tokenlength]='\0';
	*tokenCount = *tokenCount + 1;
 
  
  
}



}}
	 
	
	
		    

int main (){
	int vowels;int consonants;
	int choice ,string,strings,freq,result1;
	char str[200],dest[200],src[200],str1[200],str2[200],sub[200],result[200],ch;
	bool verify;
	printf("**************** The test file of the strings**********************\n ");
	printf("what catigory you want to try :\n");
	printf("    1.Basic String Functions \n");
	printf("    2.Intermediate String Functions\n");
	printf("    3.Advanced String Functions\n");
	printf("enter you choice : ");
	scanf("%d",&choice );
	
	
	switch (choice )
	{
		case 1 :
			printf("\n what function you want to try \n ");
			printf("1.Calculate String Length\n");
			printf("2.Copy String \n");
			printf("3.Concatenate Strings \n");
			printf("4.Compare Strings \n");
			printf("5.Check if Empty\n");
			printf("6.Reverse a String\n");
			printf("7.Convert to Uppercase \n");
			printf("8.Convert to Lowercase \n");
			printf("enter your choice : ");
			scanf("%d",&string);
			getchar(); 
			switch (string){
				case 1:
					printf ("enter your string\n");
					 fgets(str, sizeof(str), stdin);
                    str[strcspn(str, "\n")] = '\0';  // Remove newline character
                    stringLength(str);
					printf("the length of the string is : %d",stringLength( str));
					break;
				case 2:
					 dest[100];
                     src[100];
                   	printf("enter the text u want to copy : ");
                    gets( src);
                	stringCopy( dest, src);
            	break;
	 			case 3:
	      				 src[100];
                       	dest[200];
                     	printf("enter the first text (destination):");
                         gets(dest);
                       	printf("enter the second text (source):");
                     	gets(src);
                    	stringConcat( dest, src);
            	break;
				case 4:
    					str1[100];
                         str2[100];
                        printf ("enter the first string : ");
                        gets(str1);
                        printf("enter the second string :");
                        gets(str2);
                         int a=stringCompare( str1,str2);

                         if (a<0){
                   		printf("%s is greater than %s", str2 , str1);
                           }
                         if (a>0){
 	                 	printf("%s is greater than %s", str1 , str2);
                         }
                         if (a==0){
                    	printf("the strings are the same");
                               }

                      break;
          		case 5:
					
                     	 str[100];
                      	printf(" enter your character :");
                     	gets(str);
	                  	verify = isEmpty(str);
                      	if (verify == true){
	                    	printf(" the string is empty");
                            	}
                    	else {
	                	printf("the string is not empty");
                      	}
              	break;
				case 6:
					 str[100];
                	printf ("enter the text u wanna reverse :");
                	gets(str);
                    reverseString(str)	;
                    printf("The reversed text is: %s\n", str);
                    
                    break;
				case 7:
					 str[100];
                	printf("enter the string u want to converts to uppercase: ");
                	fgets(str, sizeof(str), stdin);
                	toUpperCase(str);
                 	printf("the string in upper case becomes : %s", str);
                 	break;
 				case 8:
 					 str[100];
                 	printf("enter the string u want to converts to lowerercase: ");
	                fgets(str, sizeof(str), stdin);
	                toLowerCase( str);
           	        printf("the string in lower case becomes : %s", str);
           	    default:
                    printf("Invalid choice! Please enter a number between 1 and 8.\n");
				
			}
			
		case 2:
			printf("\n what function you want to try \n ");
			printf("1.Palindrome\n");
			printf("2.Count Vowels and Consonants  \n");
			printf("3.Find Substring \n");
			printf("4.Remove Whitespaces \n");
			printf("5.Anagram \n");
			printf("6.Character Frequency \n");
			printf("7.Count Words  \n");
			printf("8.Remove Duplicate Characters \n");
			printf("enter your choice : ");
			scanf("%d",&strings);
			getchar(); 
			switch (strings)
			{
				case 1 :
					printf("Enter a string: ");
					gets(str);
					 if (isPalindrom(str)) {
                        printf("The string is a palindrome.\n");
                      } else {
                     printf("The string is not a palindrome.\n");
                        }
                        break;
                case 2:
                 printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    countVowelsConsonants(str, &vowels, &consonants);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
	                break;
                case 3:
                	printf("give the string :");
                	gets(str);
                	printf("\ngive the substring :");
                	gets(sub);
                	
                	if (findSubstring( str,  sub)!=-1)
                	{
                		printf("the posission is : %d",findSubstring( str,  sub));
					}
					else 
					{
						printf("is not found");
						
					}
					break;
                case 4:
                	 printf("Enter the string: ");
                     fgets(str, sizeof(str), stdin);

                     str[strcspn(str, "\n")] = '\0';
                     removeWhitespaces(str);
	                printf("String without whitespaces: \"%s\"\n", str);
                case 5:
                	printf("give the first string : ");
                	gets(str1);
                	printf("give the second string : ");
                	gets(str2);
                	if(isAnagram( str1, str2))
                	{
                		printf("the string is  anagram\n");
					}
					else {
						printf("the string is not anagram\n");
					}
					break;
                case 6:
                	printf("enter the string : ");
                	gets(str);
                	printf("enter the frequancy : ");
                	scanf("%d",freq);
                	charFrequency(str, freq);
                	break;
                case 7:
                	printf("enter your string :");
                 	gets(str);
                
                 	printf("the number of words in your string is : %d", countWords(str));
                 	break;
                case 8:
                	removeDuplicates( str);
                	break;
                	default:
                    printf("Invalid choice! Please enter a number between 1 and 8.\n");
				
			}
		case 3:
			printf("\n what function you want to try \n ");
			printf("1.String Compression\n");
			printf("2.Find Longest Word   \n");
			printf("3.String Rotation Check \n");
			printf("4.Count Specific Character  \n");
			printf("5.Find and Replace \n");
			printf("6.Longest Palindromic Substring  \n");
			printf("7.String Permutations  \n");
			printf("6.Split String  \n");
			printf("enter your choice : ");
			scanf("%d",strings);
			getchar(); 
			switch(strings)
			{
				case 1:
					printf("the function is not ivilable");
					break;
				case 2:
					  printf("Enter a string: ");
                      fgets(str, sizeof(str), stdin);  
                     str[strcspn(str, "\n")] = '\0'; 
                        longestWord(str, result);
                      printf("The longest word is: %s\n", result);
                     break;
				case 3:
					printf("the function is not ivilable");
					break;
				case 4:
					    printf("Enter a string: ");
                     fgets(str, sizeof(str), stdin);  
                     str[strcspn(str, "\n")] = '\0';  
					  printf("Enter the character to count: ");
                     scanf("%c", &ch);  
                     result1 = countChar(str, ch);
                     printf("The character '%c' appears %d times in the string.\n", ch, result);

				case 5:
					printf("the function is not ivilable");
					break;
				case 6:
					printf("the function is not ivilable");
					break;
				case 7:
					printf("the function is not ivilable");
					break;
				case 8:
					printf("the function is not ivilable");
					break;
			}
			
	default:
                    printf("Invalid choice! Please enter a number between 1 and 3.\n");
		
	}
	
}
