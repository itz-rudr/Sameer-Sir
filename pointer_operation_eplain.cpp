//To explain operations that can be used in pointer
#include<stdio.h>
int main(){
	int b=5; //Normal variable
	printf("%d\n",b); // print value
	printf("%u\n",&b); // print address
	//&b++ base address of a identifier cannot be changed
	int a[10]; // array with base address value of a[0] 
	//a++ can't change base address of array
	int *p;
	p=a; //can store base address of array and perform operations of it on 
	// operations can only happen under the boundaries of array
	printf("%u\n",p);
	p++;
	printf("%u\n",p);
	p+=4;
	printf("%u\n",p);
}