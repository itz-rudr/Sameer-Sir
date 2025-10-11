//To print sum of n numbers
#include<stdio.h>
int main(){
	int n,sum;
	printf("Enter the number till where to sum:\n");
	scanf("%d",&n);
	sum=0;
	for(int i=0;i<=n;i++){
		sum=sum+i;
	}
	printf("Sum of %d numbers are %d",n,sum);
}