//To input and print array structure/user-defined datatype
#include<stdio.h>
//Structure size---> 2 bytes
struct student{
	char name[10];
	int roll;
};
int main(){
	struct student a[10];
	int n;
	printf("Enter number of students:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter name and roll no. of %d student:\n",i+1);
		scanf("%s%d",a[i].name,&a[i].roll);
	}
	for(int i=0;i<n;i++){
		printf("%d Name: %s\n  Roll no.: %d\n",i+1,a[i].name,a[i].roll);
	}
	printf("Size of the student = %d\n",sizeof(struct student));
}
