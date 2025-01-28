#include<stdio.h>
int stringLength(char* str){
	int length=0;
	int i=0;
	while (str[i]!='\0'){
		length++;
		i++;
	}
	return length;
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
}
int main(){
	int i = 0;
	int size;
	int shift;
	char key[50];
	char str[100];
	char tmp[100] = {0};
	char dest[100] = {0};
	printf("enter the string you want to encrypte :");
    gets(str);
	removeWhitespaces( str);
	printf("enter the key word:");
	gets(key) ;
	size=stringLength(key);
    printf("enter the shift :") ;
	scanf("%d" ,&shift);
	   while (str[i] != '\0'){
	   	int j = 0;
	   	    while(j<size && str[i+j]!='\0'){//divide the packets based on the size
	   	    tmp[j]=str[j+i];
	   	     j++;
	        }
	        tmp[j]='\0';
	        j=0;
	        while (j<size && tmp[j]!='\0'){//shift the packet
	        tmp[j]=tmp[j]+shift;
	        j++;
			}
	      i=i+size;//to start from the next packet
	      shift++;//to change the next shift
	     stringConcat( dest, tmp);//to store the shifted packet
	    }
	    printf("the encrypted string is :%s\n", dest);
	    return 0;
	}
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	   
	    
