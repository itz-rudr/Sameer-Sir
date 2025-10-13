//Program to convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0,s=0,t;
	printf("Enter a binary no. :\n");
	scanf("%d",&n);
	while(n!=0){
		t=n%10;
		s=s+t*pow(2,i);
		i++;
		n/=10;
	}
	printf("Number in decimal is: %d",s);
}