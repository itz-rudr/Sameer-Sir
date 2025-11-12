//Program to multipy two matrices
#include<stdio.h>
int main(){
	int m,n,p,q;
	printf("Enter rows and columns of 1st matrix:\n");
	scanf("%d%d",&m,&n);
	printf("Enter rows and columns of 2nd matrix:\n");
	scanf("%d%d",&p,&q);
	int a[m][n],b[p][q];
	if(n!=p){
		printf("Multiplication of these matrices is not possible:\n");
	}else{
		printf("Enter elements of 1st matrix:\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				scanf("%d",&a[i][j]);
			}
		}
		printf("Enter elements of 2nd matrix:\n");
		for(int i=0;i<p;i++){
			for(int j=0;j<q;j++){
				scanf("%d",&b[i][j]);
			}
		}
		int c[m][q];
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				c[i][j]=0;
				for(int k=0;k<p;k++){
					c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
				}
			}
		}
		printf("Multiplication of these matrices is:\n");
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				printf("%4d",c[i][j]);
			}
			printf("\n");
		}
	}
}