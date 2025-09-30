#include<stdio.h>
int main(){
	int a=10;
	//format specifiers
	printf("%d\n",a);
	int b=20;
	printf("%d\n",b);
	printf("%d\n%d\n",a,b);
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	int c;
	//Arithmetic operators
	c=a+b;
	printf("Sum of a and b = %d\n",c);
}