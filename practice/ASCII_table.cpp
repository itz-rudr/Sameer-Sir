//To print ASCII table
#include<stdio.h>
int main(){
	int i=0;
	printf("ASCII TABLE\n");
	while(i<=255){
		//printf("%d\t",i);
		printf("%d = %c\t",i,i);
		i++;
	}
}