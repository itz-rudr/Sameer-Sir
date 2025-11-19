//To print add of two numbers using function calling case 4
//passing argument and getting return value
//input,calling,print--->main
//calculation--->function
#include<stdio.h>
int sum(int a,int b){
	int s;
	s=a+b;
	return s;
}
int main(){
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("Sum is: %d",sum(a,b));
}