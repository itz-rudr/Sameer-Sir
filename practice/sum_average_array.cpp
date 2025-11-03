//To calculate sum & average of an array
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
	int sum=0;
	float avg;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	avg=sum/n;
	printf("Sum of elements of array is: %d\n",sum);
	printf("Average of elements of array is: %.2f\n",avg);
}