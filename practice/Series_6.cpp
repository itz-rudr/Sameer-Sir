//Program to print series
//1 + (x^1)/2 + (x^2)/4 + (x^3)/6 + (x^4)/8 + ...... + (x^n)/n*2
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
		sum=sum+(pow(num,i)/(2*i));
	}
	printf("Sum of series = %.2f",sum);
}