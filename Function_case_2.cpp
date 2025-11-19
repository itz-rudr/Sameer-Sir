//Sum of two numbers using function calling case 2
//No argument but return value
//input,calculation--->function
//calling,output--->main
#include<stdio.h>
int add(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main(){
	printf("Sum is %d",add());
}