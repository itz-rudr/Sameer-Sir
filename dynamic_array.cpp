//To make dynamic array
#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter the %d elements of array:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Elements of array are:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}