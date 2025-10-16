//Program to find LCM of a no. using euclid's gcd algorithm
#include<stdio.h>
int main(){
	int num1,num2,a,b,temp;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	a=num1;
	b=num2;
	while(b!=0){
		//GCD Euclid's algorithm
		temp=b;
		b=a%b;
		a=temp;
	}
	int gcd=a;
	int lcm=(num1*num2)/gcd;
	printf("LCM of %d & %d is %d",num1,num2,lcm);
}