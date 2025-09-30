//To print the length of a number
#include<stdio.h>
int main(){
	int n;
	int l=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	while(n!=0){
		n=n/10;
		l++;
	}
	printf("Length of number is %d",l);
}