//To explain how to input data in structure array using pointer
#include<stdio.h>
struct student{
	char name[10];
	int roll;
};
int main(){
	int n;
	printf("Enter no. of records:\n");
	scanf("%d",&n);
	struct student a[n],*p;
	for(p=a;p<(a+n);p++){
		printf("Enter name & roll no.\n");
		scanf("%s%d",p->name,&p->roll);
	}
	for(p=a;p<(a+n);p++){
		printf("Name = %s\n",p->name);
		printf("Roll no. =%d\n",p->roll);
	}
}