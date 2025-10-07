//To print reverse of a number
#include<stdio.h>
int main(){
	int n,rev;
	printf("Enter the number\n");
	scanf("%d",&n);
	rev=0;
	for(n=n;n!=0;n/=10){
		int ld=n%10;
		rev=rev*10+ld;
	}
	printf("Reverse of number is: %d",rev);
}