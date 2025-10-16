//To check whether a number is prime or not
#include<stdio.h>
int main(){
	int num,temp;
	printf("Enter a number:\n");
	scanf("%d",&num);
	for(int i=2;i<=num-1;i++){
		temp=num%i;
		if(temp==0){
			break;
		}
	}
	if(temp!=0){
		printf("It is a prime number.");
	}else{
		printf("It is composite number.");
	}
}