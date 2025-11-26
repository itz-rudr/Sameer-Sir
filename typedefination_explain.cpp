//To explain typedef function
typedef struct student{
	char name[10];
	int roll;
};
#include<stdio.h>
#include<string.h>
int main(){
	student a[10],temp;
	int n;
	printf("Enter no. of records: ");
	scanf("%d",&n);
	printf("Enter records");
	for(int i=0;i<n;i++){
		printf("Enter %d name and roll no.\n",i+1);
		scanf("%s%d",a[i].name,&a[i].roll);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].roll>a[j+1].roll){
				//if(strcmp(a[j].name,a[j+1].name)==0)
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
			}
		}
	}
	printf("Name\t\tRoll no.\n");
	for(int i=0;i<n;i++){
		printf("%s\t\t%d\n",a[i].name,a[i].roll);
	}
}