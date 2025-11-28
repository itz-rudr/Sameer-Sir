//To explain pointer to pointer variable in c
#include<stdio.h>
int main(){
	int a,*p,**q;
	a=5;
	p=&a;
	q=&p;
	printf("Value of a is %d\n",*p);
	printf("Address of a is %u\n",p);//Shows value in unsigned integer
	printf("Address of p is %u\n",q);//Shows value in hexadecimal
	printf("Address of a is %u\n",*q);
	printf("Value of a is %d\n",**q);//Using pointer to pointer to access data
	printf("Address of q is %u\n",&q);
}