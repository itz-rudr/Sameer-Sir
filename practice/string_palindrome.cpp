//To check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter string:\n");
	scanf("%s",a);
	strcpy(b,a);
	strrev(b);
	if(stricmp(a,b)==0){
		printf("It is palindrome.\n");
	}else{
		printf("It is not a palindrome.\n");
	}
}