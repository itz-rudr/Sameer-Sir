//To find sum of n numbers using recursion
#include<stdio.h>
int sum(int n){
	int s;
	if(n==0){
		s=0;
	}else{
		s=n+sum(n-1);
	}
	return s;
}
int main(){
	int n;
	printf("Enter total numbers: ");
	scanf("%d",&n);
	printf("Sum of %d numbers is %d",n,sum(n));
}