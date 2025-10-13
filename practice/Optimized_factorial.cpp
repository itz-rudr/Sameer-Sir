//Optimized program to find factorial of a number
#include<stdio.h>
int main(){
	int n,fact;
	printf("Enter a number to find is factorial:\n");
	scanf("%d",&n);
	if(n<0){
		printf("Negative number");
	}else{
		fact=1;
		for(int i=1;i<=n;i++){
		fact=fact*i;
		}
		printf("Factorial of %d is %d",n,fact);
	}
}