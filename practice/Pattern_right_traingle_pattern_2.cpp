//To print right triangle of numbers
/*1
  2		2
  3		3	 3*/
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%4d",i);
		}
		printf("\n");
	}
}