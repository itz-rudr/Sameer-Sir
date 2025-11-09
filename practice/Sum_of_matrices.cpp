//Program to add two matrices
#include<stdio.h>
int main(){
	int n,m;
	printf("Enter number of rows & columns:\n");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],c[m][n];
	printf("Enter elements of 1st matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements of 2nd matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("Sum of 1st and 2nd matrices is:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
}