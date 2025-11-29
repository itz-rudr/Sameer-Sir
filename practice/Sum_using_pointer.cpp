//Addition of two numbers using pointer
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	int *p,*q;
	p=&a;
	q=&b;
	c=*p+*q;
	printf("Addition of two number is %d",c);
}