//To explain the working of do-while
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter range:\n");
	scanf("%d%d",&i,&n);
	printf("Numbers are:\n");
	do{
		printf("%d ",i);
		i++;
	}while(i<=n);
}