//To input and print structure/user-defined datatype
#include<stdio.h>
//Structure size---> 2 bytes
struct student{
	char name[10];
	int roll;
};
int main(){
	struct student a;
	printf("Enter name and roll no.:\n");
	scanf("%s%d",a.name,&a.roll);
	printf("Name: %s\nRoll no.: %d\n",a.name,a.roll);
	printf("Size of the student = %d\n",sizeof(struct student));
}
