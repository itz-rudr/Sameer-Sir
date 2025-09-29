//To understand While statement(Looping Statement)
#include<stdio.h>
int main(){
	int i=1;
	while(i<=10){
		printf("%d HELLO\n",i);
		i++;
	}
	i=1;
	//To print odd No.s
	while(i<=10){
		printf("%d\n",i);
		i+=2;
	}
	//To print even No.s
	i=0;
	while(i<=10){
		printf("%d\n",i);
		i+=2;
	}
}