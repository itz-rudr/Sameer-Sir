//To input and print n no.s using array pointer
// Using i[a]
#include<stdio.h>
int main(){
	int n;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&i[a]);
	}
	printf("Given array:\n");
	for(int i=0;i<n;i++){
		printf("%4d",i[a]);
	}
}