//To print digits of a number
#include<stdio.h>
#include<math.h>
int main(){
	int n,len,temp,num;
	printf("Enter a number\n");
	scanf("%d",&n);
	len=0;
	num=n;
	for(num=num;num!=0;num/=10){
		len++;
	}
	//printf("%d",len);
	for(int i=len-1;i>=0;i--){
		temp=n/pow(10,i);
		printf("%d\n",temp);
		n=n%(int)pow(10,i);
	}
}