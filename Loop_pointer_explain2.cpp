//To explain how to create a loop using a pointer
#include<stdio.h>
int main(){
	int n;
	printf("Enter a size of array:\n");
	scanf("%d",&n);
	int a[n],*p;
	printf("Enter elements of array:\n");
	for(p=a;p<(a+n);p++){
		scanf("%d",p);
	}
	printf("Given array:\n");
	for(p=a;p<(a+n);p++){
		printf("%4d",*p);
	}
}