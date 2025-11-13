//Program to check whether a matrix is orthogonal or not
#include<stdio.h>
int main(){
	int m,n;
	printf("Enter rows and columns of 1st matrix:\n");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n],c[m][n],d[m][n];
	printf("Enter elements of matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Transpose of matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			b[i][j]=a[j][i];
			printf("%4d",b[i][j]);
		}
		printf("\n");
	}
	printf("Inverse of matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<m;k++){
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
			}
			printf("%4d",c[i][j]);
		}
		printf("\n");
	}
	printf("Identity matrix:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				d[i][j]=1;
			}else{
				d[i][j]=0;
			}
			printf("%4d",d[i][j]);
		}
		printf("\n");
	}
	int count=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(d[i][j]==c[i][j]){
				count++;
			}
		}
	}
	if(count==m*n){
		printf("It is a orthogonal matrix.\n");
	}else{
		printf("It is not a orthogonal matrix.\n");
	}
}