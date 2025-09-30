//Swapping without using 3rd variable
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the value of a & b\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Values after swapping are\na=%d\nb=%d",a,b);
}