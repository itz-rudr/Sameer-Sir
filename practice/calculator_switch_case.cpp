//Program to make calculator using switch case
#include<stdio.h>
int main(){
	int a,b,choice;
	float c;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("Menu\n1. Add\n2. Sub\n3. Mul\n4. Div\nEnter choice:\n");
	scanf("%d",&choice);
	switch(choice){
		case 1: c=a+b;
				printf("Addition: %.0f",c);
				break;
		case 2: c=a-b;
				printf("Subtraction: %.0f",c);
				break;
		case 3: c=a*b;
				printf("Multiplication: %.0f",c);
				break;
		case 4: c=(float)a/b;
				printf("Division: %.2f",c);
				break;
		default:printf("Invalid Choice");		
	}
}