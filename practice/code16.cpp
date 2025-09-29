//To print no.s between i to n
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter range from/to\n");
	scanf("%d%d",&i,&n);
	printf("Numbers are: \n");
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
}