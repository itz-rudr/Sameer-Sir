//To input and print matrix using pointer variable
#include<stdio.h>
int main(){
	int m,n;
	printf("Enter row and columns of matrix:\n");
	scanf("%d%d",&m,&n);
	int a[m][n],*p;
	printf("Enter matrix elements:\n");
	for(int i=0;i<m;i++){
		p=a[i];
		for(int j=0;j<n;j++){
			scanf("%d",p+j);
		}	
	}
	printf("Given matrix:\n");
	for(int i=0;i<m;i++){
		p=a[i];
		for(int j=0;j<n;j++){
			printf("%4d",*(p+j));
		}
		printf("\n");
	}	
}