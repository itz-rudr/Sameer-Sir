//To check whether a no. is Strong no. or not
#include<stdio.h>
int main(){
	int n,temp,sum,fact,ld;
	printf("Enter a Number\n");
	scanf("%d",&n);
	temp=n;
	sum=0;
	for(temp=temp;temp!=0;temp/=10){
		ld=temp%10;
		printf("%d\n",ld);
		fact=1;
		while(ld>0){
			fact*=ld;
			ld--;
		}
		sum+=fact;
	}
	if(n==sum){
		printf("\nStrong's number");
	}else{
		printf("\nNot Strong's number");
	}
}