//Swapping of values
#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter the value of a & b\n");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("Values after swapping\na=%d\nb=%d",a,b);
}