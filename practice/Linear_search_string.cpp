//Linear search in string
#include<stdio.h>
#include<string.h>
int main(){
	char a[10][40],search[10];
	int i,n,f=0;
	printf("Enter number of students:\n");
	scanf("%d",&n);
	printf("Enter name of %d students:\n");
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	printf("Enter name to be searched:\n");
	scanf("%s",search);
	for(i=0;i<n;i++){
			if(strcmp(a[i],search)==0){
			printf("Found at position %d\n",i+1);
			f=1;
		}
	}
	if(f==0){
		printf("Not found\n");
	}
}