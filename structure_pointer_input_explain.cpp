//To explain how to input and print data from strcture using pointer
#include<stdio.h>
struct student{
	char name[10];
	int roll;
};
int main(){
	struct student a,*p;
	p=&a;
	printf("Enter name and roll\n");
	scanf("%s%d",p->name,&p->roll);
	printf("Name = %s\n",p->name);
	printf("Roll = %d\n",p->roll);
}