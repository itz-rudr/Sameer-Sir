//To explain strcat function
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20];
	printf("Enter two strings: ");
	scanf("%s%s",a,b);
	//Pre-defined function to concate two strings.
	strcat(a,b);
	printf("a = %s\n",a);
	printf("b = %s\n",b);
}