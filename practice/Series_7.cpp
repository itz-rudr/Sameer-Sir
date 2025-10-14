//Program to print series
//1 + (x^1)/1 + (x^2)/3 + (x^3)/5 + (x^4)/7 ...... (x^n)/(2*i-1)
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
		sum=sum+(pow(num,i)/(2*i-1));
	}
	printf("Sum of series = %.2f",sum);
}