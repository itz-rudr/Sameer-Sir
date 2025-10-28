//Program to print right triangle of *
/* 			 *
   		*	 *
   *	*	 * */
#include<stdio.h>
int main(){
	int n,i,j;
	printf("Enter the no. of iterations:\n");
	scanf("%d",&n);
//	for(int i=1;i<=n;i++){
//		for(int j=n;j>=i;j--){
//			printf(" ");
//		}
//		for(int j=1;j<=i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	for(int i=1;i<=n;i++){
		for(int k=1;k<=(n-i);k++){
			printf(" ");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}