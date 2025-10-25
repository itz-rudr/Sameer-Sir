//To print right Inverted triangle of numbers
/*1		2	 3
  1		2
  1				*/
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("%4d",j);
		}
		printf("\n");
	}
}