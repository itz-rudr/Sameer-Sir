//To print right triangle of numbers
/*1
  2		3
  4		5	 6*/
#include<stdio.h>
int main(){
	int n,i,j;
	int temp=1;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%4d",temp++);
		}
		printf("\n");
	}
}