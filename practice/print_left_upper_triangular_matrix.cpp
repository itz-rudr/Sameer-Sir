//To print upper left triangular matrix
#include<stdio.h>
int main(){
	int i,j,m,n;
	printf("Enter rows of matrix:\n");
	scanf("%d",&m);
	printf("Enter columns of matrix:\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix:\n");
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
	printf("Upper left triangular matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				printf("%4d",a[i][j]);
			}else{
				printf("    ");
			}
		}
		printf("\n");
	}
}