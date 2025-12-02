//to print exponential series using function case 2
#include<stdio.h>
#include<math.h>
float exponential(){
	float x;
	int n;
	printf("Enter a number: ");
	scanf("%f",&x);
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	float sum=1;
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
		sum=sum+(pow(x,i)/fact);
	}
	return sum;
}
int main(){
	printf("Exponential value of given series is: %.2f",exponential());
}