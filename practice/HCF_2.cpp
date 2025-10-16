//To find highest comman factor of two numbers
#include<stdio.h>
int main(){
	int num1,num2,i,gcd,min;
	printf("Enter two numbers:\n");
	scanf("%d%d",&num1,&num2);
	min=(num1<num2)?num1:num2;
	for(int i=1;i<min;i++){
		if(num1%i==0 && num2%i==0){
			gcd=i;
		}
	}
	printf("HCF of GCD of %d & %d is %d",num1,num2,gcd);
}