//To explain Static storage class without static declaration
#include<stdio.h>
void fun();
int main(){
	fun();
	fun();
	fun();
}
void fun(){
	int i=1;
	printf("%d\n",i);
	i++;
}
