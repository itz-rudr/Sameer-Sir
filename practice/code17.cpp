//To print no.s between n to i
#include<stdio.h>
int main(){
	int i,n;
	printf("Enter the range from/to\n");
	scanf("%d%d",&i,&n);
	printf("Numbers from n to i are\n");
	while(n>=i){
		printf("%d ",n);
		n--;
	}
}