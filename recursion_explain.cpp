//To explain recursive funtion
//Program to find factorial
#include<stdio.h>
int fact(int n){
	int f=1;
	if(n==0){
		f=1;
	}else{
		f=n*fact(n-1);
	}
	return f;
}
int main(){
	int n;
	printf("Enter a number to find factorial: ");
	scanf("%d",&n);
	printf("Factorial of %d is %d",n,fact(n));
}