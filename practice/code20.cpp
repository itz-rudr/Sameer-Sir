//To print reverse of a number
#include<stdio.h>
int main(){
	int n;
	int rev=0,ld;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n!=0){
		ld=n%10;
		printf("%d",ld);
		n=n/10;
	}
//this code takes more time than upper one
//	while(n!=0){
//		ld=n%10;
//		rev=rev*10+ld;
//		n=n/10;
//	}
//	printf("%d",rev);
}