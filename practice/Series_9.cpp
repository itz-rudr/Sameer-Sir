//Program to print series
//1 + (x^1)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4! + ......... + (x^n)/n!
#include<stdio.h>
#include<math.h>
int main(){
	int num,i,x;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter its power:\n");
	scanf("%d",&x);
	float sum=1;
	int fact=1;
	for(int i=1;i<=x;i++){
		fact=fact*i;
		sum=sum+(pow(num,i)/fact);
	}
	printf("Sum of series = %.2f",sum);
}