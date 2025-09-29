//to explain math.h header file
#include<stdio.h>
#include<math.h>
int main(){
	float x,c;
	printf("Enter the value of x ");
	scanf("%d",&x);
	c=pow(x,3)-4*x+5;
	printf("Ans = %.2f",c);
}