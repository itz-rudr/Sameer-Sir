//To calculate your age in seconds.
#include<stdio.h>
int main(){
	int age,sec;
	printf("Enter your age\n");
	scanf("%d",&age);
	sec=60*60*24*365*age;
	printf("Your time on earth in seconds is %d",sec);
}