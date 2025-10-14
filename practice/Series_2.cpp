//Program to print series without using power function
//1 + x^1 + x^2 + x^3 + .......... + x^n
#include<stdio.h>
int main(){
	int num,sum,i,x;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter its power:\n");
	scanf("%d",&x);
	sum=1;
	int pow=1;
	for(int i=1;i<=x;i++){
		pow=pow*num;
		printf("%d^%d+",num,i);
		sum=sum+pow;
	}
	printf("\nSum of series = %d",sum);
}