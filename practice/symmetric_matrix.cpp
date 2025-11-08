//Program to check whether a matrix is symmetric matrix or not
#include<stdio.h>
int main(){
	int n,m,count=0;
	printf("Enter number of rows and columns of matrix:\n");
	scanf("%d%d",&n,&m);
	int a[n][m],b[n][m];
	printf("Enter the elements of matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			b[j][i]=a[i][j];
		}
	}
	printf("Given matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	count=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]==b[i][j]){
				count++;
			}
		}
	}
	if(count==n*m){
		printf("The given matrix is symmetric.");
	}else{
		printf("The given matrix is not symmetric.");
	}
}