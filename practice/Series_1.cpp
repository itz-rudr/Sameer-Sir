//Program to print series
//1 + x^1 + x^2 + ........ + x^n
#include<stdio.h>
#include<math.h>
int main(){
	int num,sum,i,x;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter its power:\n",&x);
	scanf("%d",&x);
	sum=1;
	for(int i=1;i<=x;i++){
		sum=sum+pow(num,i);
	}
	printf("Sum of series = %d",sum);
}