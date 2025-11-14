//To explain array within structure
#include<stdio.h>
struct student{
	char name[10];
	int roll;
	int m[3];
	float s,p;
}a;
int main(){
	int j;
	printf("Enter the name and roll no.\n");
	scanf("%s%d",a.name,&a.roll);
	for(j=0;j<3;j++){
		printf("Enter marks of %d subject: ",j+1);
		scanf("%d",&a.m[j]);
		a.s+=a.m[j];
	}
	a.p=a.s/3;
	printf("Name: %s\nRoll no.:%d\n",a.name,a.roll);
	printf("Total marks: %.2f\nAverage marks: %.2f\n",a.s,a.p);
	printf("size of a = %d",sizeof(student));
}