//To check age identification of participents
#include<stdio.h>
int main(){
	int n;
	int count;
	printf("Enter no. of participents:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter age of participents:\n",n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("People eligible for participation:\n");
	for(int i=0;i<n;i++){
		if(a[i]>=18){
			printf("Age = %d\n",a[i]);
			count++;
		}
	}
	printf("No. of participents eligible for participation: %d\n",count);
	printf("No. of participents not eligible for participation: %d\n",n-count);
}