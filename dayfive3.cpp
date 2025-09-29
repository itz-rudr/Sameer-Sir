//To compare two numbers
//Explanation of else if statement
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	//if if condition is true than output from if 
	//if false than check else if if true than output from if
	//if false than output from else
	if(a>b){
		printf("%d is greater than &d",a,b);
	}
	else if(b>a){
		printf("%d is greater than %d",a,b);
	}
	else{
		printf("%d is equal to %d",a,b);
	}
}