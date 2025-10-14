//To print digits of a number in words.
#include<stdio.h>
#include<math.h>
int main(){
	int n,temp,len,num;
	printf("Enter a number:\n");
	scanf("%d",&n);
	num=n;
	len=0;
	for(num=num;num!=0;num/=10){
		len++;
	}
	for(int i=len-1;i>=0;i--){
		temp=n/pow(10,i);
		switch(temp){
			case 0:printf("Zero ");
			break;
			case 1:printf("One ");
			break;
			case 2:printf("Two ");
			break;
			case 3:printf("Three ");
			break;
			case 4:printf("Four ");
			break;
			case 5:printf("Five ");
			break;
			case 6:printf("Six ");
			break;
			case 7:printf("Seven ");
			break;
			case 8:printf("Eight ");
			break;
			case 9:printf("Nine ");
			break;
		}
		n=n%(int)pow(10,i);
	}
}