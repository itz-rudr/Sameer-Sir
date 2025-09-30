//To check whether a no. is Armstrong or not
#include<stdio.h>
#include<math.h>
int main(){
	int n,temp,len,sum,ld;
	printf("Enter a Number:\n");
	scanf("%d",&n);
	temp=n;
	sum=0;
	len=0;
	for(temp=temp;temp!=0;temp/=10,len++){
	}
	temp=n;
	for(temp=temp;temp!=0;temp/=10){
		ld=temp%10;
		sum+=pow(ld,len);
	}
	if(n==sum){
		printf("It is Armstrong Number");
	}else{
		printf("It is not a Armstrong Number");
	}
}