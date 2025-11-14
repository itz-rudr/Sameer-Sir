//To explain string reverse function strrev()
#include<stdio.h>
#include<string.h>
int main(){
	char a[20];
	printf("Enter a string:\n");
	scanf("%s",a);
	strrev(a);
	printf("Reverse of string:\n%s",a);
}