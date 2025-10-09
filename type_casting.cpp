//To explain type casting
#include<stdio.h>
int main(){
	int a=4;
	float b;
	b=a;//int --> float
	//implicit typecasting
	printf("a = %d\n",a);
	printf("b = %f\n",b);
	b=4.5f;
	printf("b = %f\n",b);
	int c;
	c=b;//float --> int
	printf("c = %d\n",c);
	//explicit typecasting
	printf("b = %d\n",(int)b);
	int d = (int)b;
	printf("d = %d\n",d);
}