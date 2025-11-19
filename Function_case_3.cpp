//To add two numbers using function call case 3
//passing argument but no return value
//Calculation,print--->function
//input,calling--->main
#include<stdio.h>
void sum(int a,int b){
	int sum;
	sum=a+b;
	printf("Sum of two numbers is: %d",sum);
}
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	sum(a,b);
}