//Program to convert decimal no. to binary no.
#include<stdio.h>
#include<math.h>
int main(){
	int n,s=0,i=0,t;
	printf("Enter a decimal no. :\n");
	scanf("%d",&n);
	while(n!=0){
		t=n%2;
		s=s+t*pow(10,i);
		i++;
		n/=2;
	}
	printf("Number in binary is: %d",s);
}