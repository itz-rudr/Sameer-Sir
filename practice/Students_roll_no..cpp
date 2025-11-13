//To store name and roll no. of students and sort according to roll  no.
struct student{
	char name[10];
	int roll_no;
}a[10],temp;
#include<stdio.h>
int main(){
	int n;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter name of %d students: ",i+1);
		scanf("%s",a[i].name);
		printf("Enter roll no. of %d student: ",i+1);
		scanf("%d",&a[i].roll_no);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].roll_no>a[j+1].roll_no){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Details off students\nSorted by roll no.\n");
	printf("Name\tRoll no.\n");
	for(int i=0;i<n;i++){
		printf("%s\t%d\n",a[i].name,a[i].roll_no);
	}
}