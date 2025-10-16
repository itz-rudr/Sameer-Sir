//Staircase problem
#include<stdio.h>
int main(){
	int n,a=0,b=1,c;
	printf("Enter the number of stairs:\n");
	scanf("%d",&n);
	printf("Total no. of combinations to climb it\n while only taking 1 or 2 steps:\n");
	for(int i=1;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
	}
	printf("%4d",c);
}