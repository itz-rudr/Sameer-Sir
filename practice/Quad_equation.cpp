//To solve Quadratic Equation
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x,xp,xn;
	printf("Enter the value of a,b,c from equation\n");
	scanf("%f%f%f",&a,&b,&c);
	x= (b*b)-4*a*c;
	if(x>0){
		xp=(-b+sqrt(x))/2*a;
		xn=(-b-sqrt(x))/2*a;
		printf("Roots of given Equation are %.2f %.2f",xp,xn);
	}
	else if(x<0){
		printf("Roots are imaginery");
	}
	else{
		float xz=-b/2*a;
		printf("Roots are equal and is %.2f",xz);
	}
}