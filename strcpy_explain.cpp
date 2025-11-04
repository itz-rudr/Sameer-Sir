//To explain strcpy fuction in string
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter name: ");
	scanf("%s",a);
	//Pre-defined function to compare two strings
	strcpy(b,a);
	printf("a: %s\n",a);
	printf("b: %s\n",b);
}