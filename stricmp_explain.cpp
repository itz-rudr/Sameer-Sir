//To explain stricmp function
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter two strings:\n");
	scanf("%s%s",a,b);
	//Pre-defined function to compare two strings ignoring there case.
	if(stricmp(a,b)==0){
		printf("Both strings are similar.\n");
	}else if(strcmp(a,b)>0){
		printf("String 1 is greater than String 2\n");
	}else{
		printf("String 2 is greater than String 1\n");
	}
}