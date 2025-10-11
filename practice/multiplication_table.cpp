//To print factorial of a number
#include<stdio.h>
int main(){
	int n;
	printf("Enter the number for its table\n");
	scanf("%d",&n);
	printf("Table of %d\n",n);
	for(int i=1;i<=10;i++){
		printf("%d x %d = %d\n",n,i,n*i);
	}
}