//To check whether a number is palindrome or not
#include<stdio.h>
int main(){
	int n,rev,temp;
	printf("Enter the number\n");
	scanf("%d",&n);
	temp=n;
	rev=0;
	for(temp=temp;temp!=0;temp/=10){
		int ld=temp%10;
		rev=rev*10+ld;
	}
//	printf("Reverse of number is: %d\n",rev);
	if(n==rev){
		printf("It is palindrome");
	}else{
		printf("It is not a palindrome");
	}
}