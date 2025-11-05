//To enter elements in 2d string
#include<stdio.h>
#include<string.h>
int main(){
	char a[10][40];
	int i,n;
	printf("Enter the size of string:\n");
	scanf("%d",&n);
	printf("Enter names:\n");
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	printf("Names: \n");
	for(i=0;i<n;i++){
		printf("%s\n",a[i]);
	}
}