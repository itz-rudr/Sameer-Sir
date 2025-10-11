//To print numbers between n to 1
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		printf("%d\n",i);
	}
}