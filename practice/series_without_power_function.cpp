//Program to print series without using power function
#include<stdio.h>
int main(){
	int num,sum,i,x;
	printf("Enter a number:\n");
	scanf("%d",&num);
	printf("Enter its power:\n",&x);
	scanf("%d",&x);
	sum=1;
	int pow=1;
	for(int i=1;i<=x;i++){
		pow=pow*i;
		sum=sum+pow;
	}
	printf("Sum of series = %d",sum);
}