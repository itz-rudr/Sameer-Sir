//Division of two numbers using pointer
#include<stdio.h>
int main(){
	float a,b,c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	float *p,*q;
	p=&a;
	q=&b;
	c=*p/ *q;
	printf("Division of two number is %.2f",c);
}