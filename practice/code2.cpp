//to calculate area of triangle
#include<stdio.h>
int main(){
	float b,h;
	printf("Enter the values of base & height");
	scanf("%f %f",&b,&h);
	float area = 1.0/2*b*h;
	printf("Area of triangle is %.2f",area);
}