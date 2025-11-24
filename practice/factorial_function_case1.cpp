//Factorial of number using function call case 1
#include<stdio.h>
void fact(){
	int a,factorial;
	factorial=1;
	printf("Enter a number: ");
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		factorial*=i;
	}
	printf("Factorial of %d is %d",a,factorial);
}
int main(){
	fact();
}