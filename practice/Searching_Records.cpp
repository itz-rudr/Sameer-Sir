//To input records and search a particular record
typedef struct student{
	char name[10];
	int roll;
};
#include<stdio.h>
#include<string.h>
int main(){
	student a[10];
	int n,x,t=0;
	printf("Enter no. of records: ");
	scanf("%d",&n);
	printf("Enter records\n");
	for(int i=0;i<n;i++){
		printf("Enter %d name and roll no.\n",i+1);
		scanf("%s%d",a[i].name,&a[i].roll);
	}
	printf("Enter Roll no. to be searched:\n");
	scanf("%d",&x);
	//scanf("%s",name)
	for(int i=0;i<n;i++){
		if(a[i].roll==x){
			printf("Found at position: %d",i+1);
			t++;
			break;
		}
	}
	if(t==0){
		printf("Roll no. not found.");
	}
}