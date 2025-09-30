//To print series in reverse order
#include<stdio.h>
int main(){
	int i;
	printf("Enter number of iterations\n");
	scanf("%d",&i);
	//To Reverse the order
	while(i>=1){
		printf("%d\n",i);
		i--;
	}
}