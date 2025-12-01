//To input n names and sorting them using bubble sort
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char a[10][40],t[40];
	printf("Enter number of names:\n");
	scanf("%d",&n);
	printf("Enter %d names:\n",n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	//Sorting using bubble sort
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(stricmp(a[j],a[j+1])>0){
				strcpy(t,a[j]);
				strcpy(a[j],a[j+1]);
				strcpy(a[j+1],t);
			}
		}
	}
	printf("Sorted names:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}