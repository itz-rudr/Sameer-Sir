#include<stdio.h>
int main(){
	//to expalin float format specifier
	int a,b,c;
	printf("Enter values ");
	scanf("%d %d",&a,&b);
/*	scanf("%f",&a);
	printf("Enter values ");
	scanf("%f",&b);
*/
	printf("a = %d",a);
	printf("b = %d",b);
	c=a/b; 
	printf("div = %f\n",c);
	
}