//Program to print series
//1 + (x^1)/1 + (x^2)/5 + (x^3)/9 + (x^4)/13 + ..... + (x^n)/(4*n-3)
#include<stdio.h>
#include<math.h>
int main(){
	int num,i,x;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter its power:\n");
	scanf("%d",&x);
	float sum=1;
	for(int i=1;i<=x;i++){
		sum=sum+(pow(num,i)/(4*i-3));
	}
	printf("Sum of series = %.2f",sum);
}