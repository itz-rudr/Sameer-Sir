//To print power of a number using function calling
#include<stdio.h>
int pow(int n,int e){
	int add=1;
	for(int i=0;i<e;i++){
		add=add*n;
	}
	return add;
}
int main(){
	int n,e;
	printf("Enter a number and its power: ");
	scanf("%d%d",&n,&e);
	int t=pow(n,e);
	printf("Result is: %d",t);
}