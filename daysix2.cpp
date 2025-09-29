//To understand logical operator
#include<stdio.h>
int main(){
	int a=10,b=5,c=20;
	printf("%d\n",a<b&&a++<c);//only checks second condition if first one is true
	printf("%d\n",a);
	printf("%d\n",a<b&a++<c);//checks both condition even if first one is false
	printf("%d\n",a);
}