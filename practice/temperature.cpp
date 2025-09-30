//to convert farenheit to celsius
#include<stdio.h>
int main(){
	float f,c;
	printf("Enter temperature in celsius: ");
	scanf("%f",&c);
	f=((c*9)/5)+32;
	printf("Value of temperature in farenheit is %.2f",f);
}