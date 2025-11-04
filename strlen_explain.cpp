//To explain strcpy fuction in string
#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	int l;
	printf("Enter name: ");
	scanf("%s",a);
	//pre defined function to calculate length of string
	l=strlen(a);
	printf("Length of string = %d",l);
}