//To print digits of a number
#include<stdio.h>
#include<math.h>
int main(){
	int n,len,temp,num;
	printf("Enter a number\n");
	scanf("%d",n);
	len=0;
	num=n;
	for(n=n;n!=0;n/=10){
		len++;
	}
	for(int i=len-1;i>=0;i--){
		temp=num/pow(10,i);
		printf("%d\n",temp);
		num=num%10;
	}
}