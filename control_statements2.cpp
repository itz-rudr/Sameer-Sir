//Introduction to Control Statements
#include<stdio.h>
int main(){
	int a;
	printf("Enter the number\n");
	scanf("%d",&a);
	//Explanation of if-else statement--> if true than output from if {} 
	//false than output from else {}
	if(a>0){
		printf("Number is positive");
	}
	else{
		printf("Number is Negative");
	}
}