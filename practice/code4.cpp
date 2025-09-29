//to convert celsius to farenheit
#include<stdio.h>
int main(){
	float f,c;
	printf("Enter temperature in farenheit: ");
	scanf("%f",&f);
	c=((f-32)/9)*5;
	printf("Value of temperature in celsius is %.2f",c);
}