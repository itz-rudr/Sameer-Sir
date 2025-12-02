//To print factorial using function call case 3
#include<stdio.h>
void fact(int n){
	int f=1;
	for(int i=1;i<=n;i++){
		f=f*i;
	}
	printf("Factorial of %d is %d",n,f);
}
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	fact(n);
}