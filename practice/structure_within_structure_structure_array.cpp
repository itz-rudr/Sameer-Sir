//To explain array within structure and structure array
#include<stdio.h>
struct student{
	char name[10];
	int roll;
	int m[3];
	float s,p;
};
int main(){
	int n;
	printf("Enter number of students: \n");
	scanf("%d",&n);
	struct student a[10];
	for(int i=0;i<n;i++){
		int j;
		printf("Enter the name and roll no. of %d student\n",i+1);
		scanf("%s%d",a[i].name,&a[i].roll);
		for(j=0;j<3;j++){
		printf("Enter marks of %d subject: ",j+1);
		scanf("%d",&a[i].m[j]);
		a[i].s+=a[i].m[j];
		}
		a[i].p=a[i].s/3;
	}
	for(int i=0;i<n;i++){
		printf("Details of %d student:\n",i+1);
		printf("Name: %s\nRoll no.:%d\n",a[i].name,a[i].roll);
		printf("Total marks: %.2f\nAverage marks: %.2f\n",a[i].s,a[i].p);
	}
	printf("size of a = %d",sizeof(student));
}