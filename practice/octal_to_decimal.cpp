//Program to convert octal to decimal
#include<stdio.h>
#include<math.h>
int main(){
	int n,i=0,s=0,t;
	printf("Enter a octal no.:\n");
	scanf("%d",&n);
	while(n!=0){
		t=n%10;
		s=s+t*pow(8,i);
		i++;
		n/=10;
	}
	printf("Decimal no. is %d",s);
}