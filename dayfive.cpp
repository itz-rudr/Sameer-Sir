//Introduction to Control Statements
#include<stdio.h>
int main(){
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	//Explanation of if statement--> if true than output if false than no output
	if(a>0){
		printf("Number is positive");
	}
	if(a<0){
		printf("Number is Negative");
	}
}