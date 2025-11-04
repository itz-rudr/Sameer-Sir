//To explain strlwr and strupr function
#include<stdio.h>
#include<string.h>
int main(){
	char a[20],b[20],c[20];
	printf("Enter name: ");
	scanf("%s",a);
	strcpy(b,a);
	//Pre-defined function to convert string into lowercase
	strlwr(b);
	strcpy(c,a);
	//Pre-defined function to convert string into uppercase
	strupr(c);
	printf("a = %s\n",a);
	printf("b = %s\n",b);
	printf("c = %s\n",c);
}