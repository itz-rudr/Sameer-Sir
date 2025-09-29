//To print sum of digits of a no.
#include<stdio.h>
int main(){
	int n,ld;
	int sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0){
		ld=n%10;
		sum=sum+ld;
		n=n/10;
	}
	printf("Sum of digits of number is %d",sum);
}