//to calculate area of circle.
#include<stdio.h>
int main(){
	int r;
	float area;
	printf("Enter the value of radius ");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area of circle of %d is %.2f",r,area);	
}