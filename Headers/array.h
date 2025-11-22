#include<stdio.h>
void inputarray(int n,int a[10]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void printarray(int n,int a[10]){
	for(int i=0;i<n;i++){
		printf("%4d",a[i]);
	}
	printf("\n");
}
void inputmatrix(int m,int n,int a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
}
void printmatrix(int m,int n,int a[10][10]){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
void addmatrix(int m,int n,int a[10][10],int b[10][10]){
	int c[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printmatrix(m,n,c);
}
void mulmatrix(int m,int n,int p,int q,int a[10][10],int b[10][10]){
	int c[10][10];
	if(n!=p){
		printf("Multiplication is not possible");
	}else{
		for(int i=0;i<m;i++){
			for(int j=0;j<q;j++){
				c[i][j]=0;
				for(int k=0;k<n;k++){
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printmatrix(m,q,c);
	}
}
int arraybiggest(int n,int a[10]){
	int max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
int arraysmallest(int n,int a[10]){
	int min;
	min=a[0];
	for(int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
		}
	}
	return min;
}
int bubblesort(int n,int a[10]){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int linearsearch(int n,int x,int a[10]){
	int count;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			count=i+1;
			break;
		}
	}
	return count;
}