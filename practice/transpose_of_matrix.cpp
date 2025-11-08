//To print transpose of a matrix
#include<stdio.h>
int main(){
	int i,j,m,n;
	printf("Enter rows of matrix:\n");
	scanf("%d",&m);
	printf("Enter columns of matrix:\n");
	scanf("%d",&n);
	printf("Enter the elements of matrix:\n");
	int a[m][n];
	for(i=0;i<m;i++)//Traverssing through rows
	{
		for(j=0;j<n;j++)//Traversing through columns
		{
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
	printf("Transpose of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%4d",a[j][i]);
		}
		printf("\n");
	}
}